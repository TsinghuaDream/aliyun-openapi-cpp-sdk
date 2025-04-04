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

#include <alibabacloud/domain/model/DomainSpecialBizCancelRequest.h>

using AlibabaCloud::Domain::Model::DomainSpecialBizCancelRequest;

DomainSpecialBizCancelRequest::DomainSpecialBizCancelRequest()
    : RpcServiceRequest("domain", "2018-01-29", "DomainSpecialBizCancel") {
  setMethod(HttpRequest::Method::Post);
}

DomainSpecialBizCancelRequest::~DomainSpecialBizCancelRequest() {}

long DomainSpecialBizCancelRequest::getBizId() const {
  return bizId_;
}

void DomainSpecialBizCancelRequest::setBizId(long bizId) {
  bizId_ = bizId;
  setBodyParameter(std::string("BizId"), std::to_string(bizId));
}

std::string DomainSpecialBizCancelRequest::getUserClientIp() const {
  return userClientIp_;
}

void DomainSpecialBizCancelRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

