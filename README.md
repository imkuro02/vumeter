# vumeter
python and arduino led vu meter

src/arduino-src is the arduino project you need to upload to your arduino

Getting: "OSError: [Errno 13] Permission denied: '/dev/ttyACM0'" error?

cd /etc/udev/rules.d
sudo touch my-newrule.rules
sudo vim my-newrule.rules
KERNEL=="ttyACM0", MODE="0666"

save, and restart pc
https://stackoverflow.com/questions/27858041/oserror-errno-13-permission-denied-dev-ttyacm0-using-pyserial-from-pyth/27886201
