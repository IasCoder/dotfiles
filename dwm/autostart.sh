#!/bin/bash

#bar
#sbar &
dwmblocks &

xrandr --output HDMI-1-0 --mode 1920x1080 --rate 144 --output eDP1 --brightness .0
#xrandr --output HDMI-1-0 --primary --mode 1920x1080 --rate 143.98 --output eDP1 --mode 1920x1080 --rate 144 --right-of HDMI-1-0

st -e sudo intel-undervolt apply &

#blackout
xbacklight -set 0

xfce4-power-manager &

nitrogen --restore

firefox &
