#!/bin/bash -e

sudo install -m 644 ./dist/linux64/50-oryx.rules ./dist/linux64/50-oryx.rules -t    /etc/udev/rules.d/
cp ./dist/linux64/wally.desktop                                                     ~/.local/share/applications/
cp ./dist/linux64/wally                                                             ~/.local/bin/
