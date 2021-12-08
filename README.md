# vumeter
python and arduino led vu meter

vumeter runs on python2.7

dependencies:
https://github.com/Valodim/python-pulseaudio
https://pypi.org/simple/pyserial/ (pick py2.7)

code I stole that carries this whole project:
https://menno.io/posts/pulseaudio_monitoring/

src/arduino-src is the arduino project you need to upload to your arduino

Getting: "OSError: [Errno 13] Permission denied: '/dev/ttyACM0'" error?

cd /etc/udev/rules.d
sudo touch my-newrule.rules
sudo vim my-newrule.rules
KERNEL=="ttyACM0", MODE="0666"

save, and restart pc
https://stackoverflow.com/questions/27858041/oserror-errno-13-permission-denied-dev-ttyacm0-using-pyserial-from-pyth/27886201
