[CYESS](http://www.cyess.com) - Android 4.0 BSP Porting Sample Code for S5PV210
===================================================================================

This project provides lots of android sample codes for QT210 development board. QT210 is an Android development board based on S5PV210.

## Usage
	1. Copy project to your android source code
		ex: cp -rf hello_lib  android/device/samsung/smdkv210/
	2. Build sample code	
		ex: cd android/device/samsung/smdkv210/hello_lib
		    mm
	3. Push test code to your development board
		ex: cd android/out/target/product/smdkv210/systm/lib
		    adb push libhello.so /sytem/lib

## Documentation

* hello_lib - helloworld JNI library sample code.
* hello_native - helloworld native C sample code.
* hello_static - helloworld static C sample code.
* led_driver - led kernel module for QT210 development board.
* led_jni - led JNI library and APP sample code.
* native_test - including keypad, led and touchscreen native C sample code.
* Build_Android_QT210.txt - instruction for build android ICS on QT210 development board.

## Author

* Howard Lin (howard.lin@cyess.com)

## Copyright
	
* Copyright (c) 2013 CYESS Co., Ltd  Howard Lin

## Contributors

* https://github.com/HowardLin/Android_BSP_Porting_Guide/contributors

## License

* Licensed under the Apache 2.0 License
