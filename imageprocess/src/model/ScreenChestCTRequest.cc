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

#include <alibabacloud/imageprocess/model/ScreenChestCTRequest.h>

using AlibabaCloud::Imageprocess::Model::ScreenChestCTRequest;

ScreenChestCTRequest::ScreenChestCTRequest()
    : RpcServiceRequest("imageprocess", "2020-03-20", "ScreenChestCT") {
  setMethod(HttpRequest::Method::Post);
}

ScreenChestCTRequest::~ScreenChestCTRequest() {}

std::string ScreenChestCTRequest::getOrgName() const {
  return orgName_;
}

void ScreenChestCTRequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setBodyParameter(std::string("OrgName"), orgName);
}

long ScreenChestCTRequest::getMask() const {
  return mask_;
}

void ScreenChestCTRequest::setMask(long mask) {
  mask_ = mask;
  setBodyParameter(std::string("Mask"), std::to_string(mask));
}

std::string ScreenChestCTRequest::getDataFormat() const {
  return dataFormat_;
}

void ScreenChestCTRequest::setDataFormat(const std::string &dataFormat) {
  dataFormat_ = dataFormat;
  setBodyParameter(std::string("DataFormat"), dataFormat);
}

std::vector<ScreenChestCTRequest::URLList> ScreenChestCTRequest::getURLList() const {
  return uRLList_;
}

void ScreenChestCTRequest::setURLList(const std::vector<ScreenChestCTRequest::URLList> &uRLList) {
  uRLList_ = uRLList;
  for(int dep1 = 0; dep1 != uRLList.size(); dep1++) {
  auto uRLListObj = uRLList.at(dep1);
  std::string uRLListObjStr = std::string("URLList") + "." + std::to_string(dep1 + 1);
    setBodyParameter(uRLListObjStr + ".URL", uRLListObj.uRL);
  }
}

std::string ScreenChestCTRequest::getOrgId() const {
  return orgId_;
}

void ScreenChestCTRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

bool ScreenChestCTRequest::getAsync() const {
  return async_;
}

void ScreenChestCTRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

