wget https://files.pythonhosted.org/packages/df/c9/d9da7fafaf2a2b323d20eee050503ab08237c16b0119c7bbf1597d53f793/pyserial-2.7.tar.gz#sha256=3542ec0838793e61d6224e27ff05e8ce4ba5a5c5cc4ec5c6a3e8d49247985477

tar -xf pyserial-2.7.tar.gz

git clone https://github.com/Valodim/python-pulseaudio.git
cp -r  python-pulseaudio/pulseaudio pulseaudio
cp -r pyserial-2.7/serial serial


