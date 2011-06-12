#!/sbin/busybox sh
# Remount filesystems RW
busybox mount -o remount,rw /
busybox mount -o remount,rw /system
# Install Busybox
rm -f /system/xbin/busybox
rm -f /system/bin/busybox
/sbin/busybox --install -s /sbin
/sbin/busybox --install -s /system/bin
ln -s /system/xbin/busybox /system/bin/busybox
sync
# Enable init.d support
if [ -d /system/etc/init.d ]
then
	logwrapper busybox run-parts /system/etc/init.d
fi
sync
# keyboard patch sysfs call 5 for snappy keyboard performance (range: 1-16 default: 7)
# Thanks DRockstar

if [ ! -f "/data/local/timer_delay" ]; then
  echo 5 > /data/local/timer_delay
fi
cat /data/local/timer_delay > /sys/devices/platform/s3c-keypad/timer_delay

# Fix screwy ownerships

for blip in conf default.prop fota.rc init init.goldfish.rc init.rc init.smdkc110.rc lib lpm.rc modules recovery.rc res sbin
do
	chown root.system /$blip
	chown root.system /$blip/*
done

chown root.system /lib/modules/*
chown root.system /res/images/*


chmod 6755 /sbin/su
rm /system/bin/su
rm /system/xbin/su
cat  /sbin/su /system/bin/su
ln -s /system/bin/su /system/xbin/su
#setup proper passwd and group files for 3rd party root access
# Thanks DevinXtreme

if [ ! -f "/system/etc/passwd" ]; then
	echo "root::0:0:root:/data/local:/system/bin/sh" > /system/etc/passwd
	chmod 0666 /system/etc/passwd
fi
if [ ! -f "/system/etc/group" ]; then
	echo "root::0:" > /system/etc/group
	chmod 0666 /system/etc/group
fi
# fix busybox DNS while system is read-write
if [ ! -f "/system/etc/resolv.conf" ]; then
	echo "nameserver 8.8.8.8" >> /system/etc/resolv.conf
	echo "nameserver 8.8.4.4" >> /system/etc/resolv.conf
fi
sync
# patch to prevent certain malware apps
if [ -f "/system/bin/profile" ]; then
	rm /system/bin/profile
fi
touch /system/bin/profile
chmod 644 /system/bin/profile
if [ ! -f "/system/app/Superuser.apk" ] && [ ! -f "/data/app/Superuser.apk" ] && [[ ! -f "/data/app/com.noshufou.android.su"* ]]; then
	if [ -f "/system/app/Asphalt5_DEMO_ANMP_Samsung_D700_Sprint_ML.apk" ]; then
		rm /system/app/Asphalt5_DEMO_ANMP_Samsung_D700_Sprint_ML.apk
	fi
	if [ -f "/system/app/FreeHDGameDemos.apk" ]; then
		rm /system/app/FreeHDGameDemos.apk
	fi
 	busybox cp /sbin/Superuser.apk /system/app/Superuser.apk
 fi

#Minfree RamBoost
if [ -e /sys/module/lowmemorykiller/parameters/minfree ]; then
    echo "Modifying minfree parameters"
        echo "2560,4096,6144,17408,19456,23552" > /sys/module/lowmemorykiller/parameters/minfree
    else
        echo "minfree not found"
fi
sync
# remount read only and continue
busybox mount -o remount,ro /
busybox mount -o remount,ro /system
