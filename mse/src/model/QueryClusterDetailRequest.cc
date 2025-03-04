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

#include <alibabacloud/mse/model/QueryClusterDetailRequest.h>

using AlibabaCloud::Mse::Model::QueryClusterDetailRequest;

QueryClusterDetailRequest::QueryClusterDetailRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryClusterDetail") {
  setMethod(HttpRequest::Method::Post);
}

QueryClusterDetailRequest::~QueryClusterDetailRequest() {}

std::string QueryClusterDetailRequest::getOrderId() const {
  return orderId_;
}

void QueryClusterDetailRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), orderId);
}

std::string QueryClusterDetailRequest::getClusterId() const {
  return clusterId_;
}

void QueryClusterDetailRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string QueryClusterDetailRequest::getInstanceId() const {
  return instanceId_;
}

void QueryClusterDetailRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string QueryClusterDetailRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryClusterDetailRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

