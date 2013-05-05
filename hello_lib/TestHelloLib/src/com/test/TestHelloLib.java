/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * CYESS Co.,Ltd howard.lin@cyess.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


package com.test;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;
public class TestHelloLib extends Activity {
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        
	printHello();

        TextView JNIText = (TextView)findViewById(R.id.JNIText);
        JNIText.setText(getText());

        TextView JNISum = (TextView)findViewById(R.id.JNISum);
        JNISum.setText(Integer.toString(getSum(2,3)));        
    }
    static {
        System.loadLibrary("hello");
        }
       
        private native void printHello();
        private native String getText();
        private native int getSum(int a,int b);

}
