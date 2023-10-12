/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
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

#include <alibabacloud/oceanbasepro/model/DeleteInstancesRequest.h>

using AlibabaCloud::OceanBasePro::Model::DeleteInstancesRequest;

DeleteInstancesRequest::DeleteInstancesRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DeleteInstances") {
  setMethod(HttpRequest::Method::Post);
}

DeleteInstancesRequest::~DeleteInstancesRequest() {}

std::string DeleteInstancesRequest::getBackupRetainMode() const {
  return backupRetainMode_;
}

void DeleteInstancesRequest::setBackupRetainMode(const std::string &backupRetainMode) {
  backupRetainMode_ = backupRetainMode;
  setBodyParameter(std::string("BackupRetainMode"), backupRetainMode);
}

std::string DeleteInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DeleteInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setBodyParameter(std::string("InstanceIds"), instanceIds);
}

