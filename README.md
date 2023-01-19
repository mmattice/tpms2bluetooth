# tpms2bluetooth

Target board: https://amzn.to/3XDanek

```
pio run -e esp32_heltec
esptool.py --port /dev/tty.SLAB_USBtoUART write_flash 0 .pio/build/esp32_heltec/firmware.bin ; screen /dev/tty.SLAB_USBtoUART 115200
```
