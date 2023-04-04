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

#include <alibabacloud/imm/model/SuspendTriggerRequest.h>

using AlibabaCloud::Imm::Model::SuspendTriggerRequest;

SuspendTriggerRequest::SuspendTriggerRequest()
    : RpcServiceRequest("imm", "2020-09-30", "SuspendTrigger") {
  setMethod(HttpRequest::Method::Post);
}

SuspendTriggerRequest::~SuspendTriggerRequest() {}

std::string SuspendTriggerRequest::getId() const {
  return id_;
}

void SuspendTriggerRequest::setId(const std::string &id) {
  id_ = id;
  setBodyParameter(std::string("Id"), id);
}

std::string SuspendTriggerRequest::getProjectName() const {
  return projectName_;
}

void SuspendTriggerRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

