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

#include <alibabacloud/sas/model/OperateSuspiciousOverallConfigRequest.h>

using AlibabaCloud::Sas::Model::OperateSuspiciousOverallConfigRequest;

OperateSuspiciousOverallConfigRequest::OperateSuspiciousOverallConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "OperateSuspiciousOverallConfig") {
  setMethod(HttpRequest::Method::Post);
}

OperateSuspiciousOverallConfigRequest::~OperateSuspiciousOverallConfigRequest() {}

std::string OperateSuspiciousOverallConfigRequest::getType() const {
  return type_;
}

void OperateSuspiciousOverallConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string OperateSuspiciousOverallConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void OperateSuspiciousOverallConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string OperateSuspiciousOverallConfigRequest::getLang() const {
  return lang_;
}

void OperateSuspiciousOverallConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string OperateSuspiciousOverallConfigRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void OperateSuspiciousOverallConfigRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

bool OperateSuspiciousOverallConfigRequest::getNoTargetAsOn() const {
  return noTargetAsOn_;
}

void OperateSuspiciousOverallConfigRequest::setNoTargetAsOn(bool noTargetAsOn) {
  noTargetAsOn_ = noTargetAsOn;
  setParameter(std::string("NoTargetAsOn"), noTargetAsOn ? "true" : "false");
}

std::string OperateSuspiciousOverallConfigRequest::getConfig() const {
  return config_;
}

void OperateSuspiciousOverallConfigRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

