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

#include <alibabacloud/eflo/model/ListVpdsRequest.h>

using AlibabaCloud::Eflo::Model::ListVpdsRequest;

ListVpdsRequest::ListVpdsRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListVpds") {
  setMethod(HttpRequest::Method::Post);
}

ListVpdsRequest::~ListVpdsRequest() {}

int ListVpdsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListVpdsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool ListVpdsRequest::getWithDependence() const {
  return withDependence_;
}

void ListVpdsRequest::setWithDependence(bool withDependence) {
  withDependence_ = withDependence;
  setBodyParameter(std::string("WithDependence"), withDependence ? "true" : "false");
}

std::string ListVpdsRequest::getRegionId() const {
  return regionId_;
}

void ListVpdsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool ListVpdsRequest::getWithoutVcc() const {
  return withoutVcc_;
}

void ListVpdsRequest::setWithoutVcc(bool withoutVcc) {
  withoutVcc_ = withoutVcc;
  setBodyParameter(std::string("WithoutVcc"), withoutVcc ? "true" : "false");
}

int ListVpdsRequest::getPageSize() const {
  return pageSize_;
}

void ListVpdsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool ListVpdsRequest::getForSelect() const {
  return forSelect_;
}

void ListVpdsRequest::setForSelect(bool forSelect) {
  forSelect_ = forSelect;
  setBodyParameter(std::string("ForSelect"), forSelect ? "true" : "false");
}

std::string ListVpdsRequest::getFilterErId() const {
  return filterErId_;
}

void ListVpdsRequest::setFilterErId(const std::string &filterErId) {
  filterErId_ = filterErId;
  setBodyParameter(std::string("FilterErId"), filterErId);
}

std::string ListVpdsRequest::getVpdId() const {
  return vpdId_;
}

void ListVpdsRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

bool ListVpdsRequest::getEnablePage() const {
  return enablePage_;
}

void ListVpdsRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

std::string ListVpdsRequest::getName() const {
  return name_;
}

void ListVpdsRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string ListVpdsRequest::getStatus() const {
  return status_;
}

void ListVpdsRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

