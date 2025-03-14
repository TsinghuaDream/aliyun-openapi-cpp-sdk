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

#include <alibabacloud/sophonsoar/model/ModifyPlaybookInstanceStatusRequest.h>

using AlibabaCloud::Sophonsoar::Model::ModifyPlaybookInstanceStatusRequest;

ModifyPlaybookInstanceStatusRequest::ModifyPlaybookInstanceStatusRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "ModifyPlaybookInstanceStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPlaybookInstanceStatusRequest::~ModifyPlaybookInstanceStatusRequest() {}

std::string ModifyPlaybookInstanceStatusRequest::getRoleFor() const {
  return roleFor_;
}

void ModifyPlaybookInstanceStatusRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

int ModifyPlaybookInstanceStatusRequest::getActive() const {
  return active_;
}

void ModifyPlaybookInstanceStatusRequest::setActive(int active) {
  active_ = active;
  setBodyParameter(std::string("Active"), std::to_string(active));
}

std::string ModifyPlaybookInstanceStatusRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void ModifyPlaybookInstanceStatusRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setBodyParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string ModifyPlaybookInstanceStatusRequest::getRoleType() const {
  return roleType_;
}

void ModifyPlaybookInstanceStatusRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string ModifyPlaybookInstanceStatusRequest::getLang() const {
  return lang_;
}

void ModifyPlaybookInstanceStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

