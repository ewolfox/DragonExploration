/*
 * Copyright (C) 2013 The Android Open Source Project
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

package com.android.cts.verifier.bluetooth;

import com.android.cts.verifier.ManifestTestListAdapter;
import com.android.cts.verifier.PassFailButtons;
import com.android.cts.verifier.R;

import android.os.Bundle;

public class BleScannerTestActivity extends PassFailButtons.TestListActivity {

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.pass_fail_list);
        setPassFailButtonClickListeners();
        setInfoResources(R.string.ble_scanner_test_name,
                         R.string.ble_scanner_test_info, -1);
        setTestListAdapter(new ManifestTestListAdapter(this, getClass().getName()));
    }
}
