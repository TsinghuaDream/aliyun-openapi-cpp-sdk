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

#include <alibabacloud/dms-enterprise/model/ExecuteDataCorrectRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ExecuteDataCorrectRequest;

ExecuteDataCorrectRequest::ExecuteDataCorrectRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ExecuteDataCorrect") {
  setMethod(HttpRequest::Method::Post);
}

ExecuteDataCorrectRequest::~ExecuteDataCorrectRequest() {}

std::string ExecuteDataCorrectRequest::getTid() const {
  return tid_;
}

void ExecuteDataCorrectRequest::setTid(const std::string &tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), tid);
}

std::map<std::string, std::string> ExecuteDataCorrectRequest::getActionDetail() const {
  return actionDetail_;
}

void ExecuteDataCorrectRequest::setActionDetail(std::map<std::string, std::string> actionDetail) {
  actionDetail_ = actionDetail;
  setParameter(std::string("ActionDetail"), actionDetail);
}

long ExecuteDataCorrectRequest::getOrderId() const {
  return orderId_;
}

void ExecuteDataCorrectRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

std::string ExecuteDataCorrectRequest::getActionName() const {
  return actionName_;
}

void ExecuteDataCorrectRequest::setActionName(const std::string &actionName) {
  actionName_ = actionName;
  setParameter(std::string("ActionName"), actionName);
}

std::string ExecuteDataCorrectRequest::getRealLoginUserUid() const {
  return realLoginUserUid_;
}

void ExecuteDataCorrectRequest::setRealLoginUserUid(const std::string &realLoginUserUid) {
  realLoginUserUid_ = realLoginUserUid;
  setParameter(std::string("RealLoginUserUid"), realLoginUserUid);
}

