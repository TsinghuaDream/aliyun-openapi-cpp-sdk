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

#include <alibabacloud/ims/model/ListSAMLProvidersRequest.h>

using AlibabaCloud::Ims::Model::ListSAMLProvidersRequest;

ListSAMLProvidersRequest::ListSAMLProvidersRequest()
    : RpcServiceRequest("ims", "2019-08-15", "ListSAMLProviders") {
  setMethod(HttpRequest::Method::Post);
}

ListSAMLProvidersRequest::~ListSAMLProvidersRequest() {}

std::string ListSAMLProvidersRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void ListSAMLProvidersRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string ListSAMLProvidersRequest::getMarker() const {
  return marker_;
}

void ListSAMLProvidersRequest::setMarker(const std::string &marker) {
  marker_ = marker;
  setParameter(std::string("Marker"), marker);
}

int ListSAMLProvidersRequest::getMaxItems() const {
  return maxItems_;
}

void ListSAMLProvidersRequest::setMaxItems(int maxItems) {
  maxItems_ = maxItems;
  setParameter(std::string("MaxItems"), std::to_string(maxItems));
}

