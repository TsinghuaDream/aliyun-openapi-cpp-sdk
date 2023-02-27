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

#include <alibabacloud/alinlp/model/GetCateChEcomRequest.h>

using AlibabaCloud::Alinlp::Model::GetCateChEcomRequest;

GetCateChEcomRequest::GetCateChEcomRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetCateChEcom") {
  setMethod(HttpRequest::Method::Post);
}

GetCateChEcomRequest::~GetCateChEcomRequest() {}

std::string GetCateChEcomRequest::getBusiness() const {
  return business_;
}

void GetCateChEcomRequest::setBusiness(const std::string &business) {
  business_ = business;
  setParameter(std::string("Business"), business);
}

std::string GetCateChEcomRequest::getServiceCode() const {
  return serviceCode_;
}

void GetCateChEcomRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetCateChEcomRequest::getImageUrl() const {
  return imageUrl_;
}

void GetCateChEcomRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setBodyParameter(std::string("ImageUrl"), imageUrl);
}

std::string GetCateChEcomRequest::getText() const {
  return text_;
}

void GetCateChEcomRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

