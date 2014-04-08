#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/friendscoin.png
ICON_DST=../../src/qt/res/icons/friendscoin.ico
convert ${ICON_SRC} -resize 16x16 friendscoin-16.png
convert ${ICON_SRC} -resize 32x32 friendscoin-32.png
convert ${ICON_SRC} -resize 48x48 friendscoin-48.png
convert friendscoin-16.png friendscoin-32.png friendscoin-48.png ${ICON_DST}

