// Copyright 2014 The Crashpad Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "util/test/executable_path.h"

#include "base/files/file_path.h"
#include "gtest/gtest.h"

namespace crashpad {
namespace test {
namespace {

TEST(ExecutablePath, ExecutablePath) {
  base::FilePath executable_path = ExecutablePath();
  base::FilePath executable_name = executable_path.BaseName();
  EXPECT_EQ(FILE_PATH_LITERAL("util_test"), executable_name.value());
}

}  // namespace
}  // namespace test
}  // namespace crashpad
