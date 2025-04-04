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

#include <alibabacloud/domain/model/SaveSingleTaskForGenerateDomainCertificateRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForGenerateDomainCertificateRequest;

SaveSingleTaskForGenerateDomainCertificateRequest::SaveSingleTaskForGenerateDomainCertificateRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForGenerateDomainCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForGenerateDomainCertificateRequest::~SaveSingleTaskForGenerateDomainCertificateRequest() {}

std::string SaveSingleTaskForGenerateDomainCertificateRequest::getDomainName() const {
  return domainName_;
}

void SaveSingleTaskForGenerateDomainCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string SaveSingleTaskForGenerateDomainCertificateRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveSingleTaskForGenerateDomainCertificateRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveSingleTaskForGenerateDomainCertificateRequest::getLang() const {
  return lang_;
}

void SaveSingleTaskForGenerateDomainCertificateRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

