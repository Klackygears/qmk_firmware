# pinkiesout

An ergonomic 65% keyboard

* Keyboard Maintainer: [sadekbaroudi](https://github.com/sadekbaroudi)

Pinkies Out supports vial! If you want to use Vial, go to https://github.com/sadekbaroudi/vial-qmk/keyboards/fingerpunch/pinkiesout/

To build the firmware for this keyboard (after setting up your build environment):
```
    make fingerpunch/pinkiesout:default RGBLIGHT_ENABLE=yes OLED_ENABLE=yes
```

Don't forget to add ```CONVERT_TO=stemcell``` if using a stemcell controller.

Options are:
```
    RGBLIGHT_ENABLE=yes
    RGB_MATRIX_ENABLE=yes
    OLED_ENABLE=yes
    PIMORONI_TRACKBALL_ENABLE=yes
```

If using the vial repository, use these:
    make fingerpunch/pinkiesout/v1/no-features:vial
    make fingerpunch/pinkiesout/v1/oled:vial
    make fingerpunch/pinkiesout/v1/rgblight:vial
    make fingerpunch/pinkiesout/v1/rgblight-oled:vial
    make fingerpunch/pinkiesout/v1/rgbmatrix:vial
    make fingerpunch/pinkiesout/v1/rgbmatrix-oled:vial

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
