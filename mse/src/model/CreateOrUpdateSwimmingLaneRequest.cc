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

#include <alibabacloud/mse/model/CreateOrUpdateSwimmingLaneRequest.h>

using AlibabaCloud::Mse::Model::CreateOrUpdateSwimmingLaneRequest;

CreateOrUpdateSwimmingLaneRequest::CreateOrUpdateSwimmingLaneRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateOrUpdateSwimmingLane") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateSwimmingLaneRequest::~CreateOrUpdateSwimmingLaneRequest() {}

std::string CreateOrUpdateSwimmingLaneRequest::getSource() const {
  return source_;
}

void CreateOrUpdateSwimmingLaneRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string CreateOrUpdateSwimmingLaneRequest::getGmtModified() const {
  return gmtModified_;
}

void CreateOrUpdateSwimmingLaneRequest::setGmtModified(const std::string &gmtModified) {
  gmtModified_ = gmtModified;
  setParameter(std::string("GmtModified"), gmtModified);
}

std::string CreateOrUpdateSwimmingLaneRequest::getUserId() const {
  return userId_;
}

void CreateOrUpdateSwimmingLaneRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateOrUpdateSwimmingLaneRequest::getLicenseKey() const {
  return licenseKey_;
}

void CreateOrUpdateSwimmingLaneRequest::setLicenseKey(const std::string &licenseKey) {
  licenseKey_ = licenseKey;
  setParameter(std::string("LicenseKey"), licenseKey);
}

std::string CreateOrUpdateSwimmingLaneRequest::getRegionId() const {
  return regionId_;
}

void CreateOrUpdateSwimmingLaneRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateOrUpdateSwimmingLaneRequest::getEntryRule() const {
  return entryRule_;
}

void CreateOrUpdateSwimmingLaneRequest::setEntryRule(const std::string &entryRule) {
  entryRule_ = entryRule;
  setParameter(std::string("EntryRule"), entryRule);
}

bool CreateOrUpdateSwimmingLaneRequest::getEnable() const {
  return enable_;
}

void CreateOrUpdateSwimmingLaneRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

long CreateOrUpdateSwimmingLaneRequest::getId() const {
  return id_;
}

void CreateOrUpdateSwimmingLaneRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string CreateOrUpdateSwimmingLaneRequest::getTag() const {
  return tag_;
}

void CreateOrUpdateSwimmingLaneRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::vector<CreateOrUpdateSwimmingLaneRequest::EntryRules> CreateOrUpdateSwimmingLaneRequest::getEntryRules() const {
  return entryRules_;
}

void CreateOrUpdateSwimmingLaneRequest::setEntryRules(const std::vector<CreateOrUpdateSwimmingLaneRequest::EntryRules> &entryRules) {
  entryRules_ = entryRules;
  for(int dep1 = 0; dep1 != entryRules.size(); dep1++) {
  auto entryRulesObj = entryRules.at(dep1);
  std::string entryRulesObjStr = std::string("EntryRules") + "." + std::to_string(dep1 + 1);
    for(int dep2 = 0; dep2 != entryRulesObj.restItems.size(); dep2++) {
    auto restItemsObj = entryRulesObj.restItems.at(dep2);
    std::string restItemsObjStr = entryRulesObjStr + ".RestItems" + "." + std::to_string(dep2 + 1);
      setParameter(restItemsObjStr + ".Datum", restItemsObj.datum);
      setParameter(restItemsObjStr + ".Divisor", std::to_string(restItemsObj.divisor));
      setParameter(restItemsObjStr + ".Rate", std::to_string(restItemsObj.rate));
      setParameter(restItemsObjStr + ".Name", restItemsObj.name);
      setParameter(restItemsObjStr + ".Type", restItemsObj.type);
      setParameter(restItemsObjStr + ".Cond", restItemsObj.cond);
      setParameter(restItemsObjStr + ".Remainder", std::to_string(restItemsObj.remainder));
      setParameter(restItemsObjStr + ".Value", restItemsObj.value);
      setParameter(restItemsObjStr + ".Operator", restItemsObj._operator);
    }
    setParameter(entryRulesObjStr + ".Path", entryRulesObj.path);
    setParameter(entryRulesObjStr + ".Condition", entryRulesObj.condition);
    setParameter(entryRulesObjStr + ".Enable", entryRulesObj.enable ? "true" : "false");
    setParameter(entryRulesObjStr + ".Priority", std::to_string(entryRulesObj.priority));
  }
}

long CreateOrUpdateSwimmingLaneRequest::getGroupId() const {
  return groupId_;
}

void CreateOrUpdateSwimmingLaneRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::string CreateOrUpdateSwimmingLaneRequest::getGmtCreate() const {
  return gmtCreate_;
}

void CreateOrUpdateSwimmingLaneRequest::setGmtCreate(const std::string &gmtCreate) {
  gmtCreate_ = gmtCreate;
  setParameter(std::string("GmtCreate"), gmtCreate);
}

bool CreateOrUpdateSwimmingLaneRequest::getEnableRules() const {
  return enableRules_;
}

void CreateOrUpdateSwimmingLaneRequest::setEnableRules(bool enableRules) {
  enableRules_ = enableRules;
  setParameter(std::string("EnableRules"), enableRules ? "true" : "false");
}

std::string CreateOrUpdateSwimmingLaneRequest::getName() const {
  return name_;
}

void CreateOrUpdateSwimmingLaneRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateOrUpdateSwimmingLaneRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateOrUpdateSwimmingLaneRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

int CreateOrUpdateSwimmingLaneRequest::getStatus() const {
  return status_;
}

void CreateOrUpdateSwimmingLaneRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

