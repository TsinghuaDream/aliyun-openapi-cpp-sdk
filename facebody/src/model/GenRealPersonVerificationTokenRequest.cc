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

#include <alibabacloud/facebody/model/GenRealPersonVerificationTokenRequest.h>

using AlibabaCloud::Facebody::Model::GenRealPersonVerificationTokenRequest;

GenRealPersonVerificationTokenRequest::GenRealPersonVerificationTokenRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "GenRealPersonVerificationToken")
{
	setMethod(HttpRequest::Method::Post);
}

GenRealPersonVerificationTokenRequest::~GenRealPersonVerificationTokenRequest()
{}

std::string GenRealPersonVerificationTokenRequest::getMetaInfo()const
{
	return metaInfo_;
}

void GenRealPersonVerificationTokenRequest::setMetaInfo(const std::string& metaInfo)
{
	metaInfo_ = metaInfo;
	setBodyParameter("MetaInfo", metaInfo);
}

std::string GenRealPersonVerificationTokenRequest::getCertificateNumber()const
{
	return certificateNumber_;
}

void GenRealPersonVerificationTokenRequest::setCertificateNumber(const std::string& certificateNumber)
{
	certificateNumber_ = certificateNumber;
	setBodyParameter("CertificateNumber", certificateNumber);
}

std::string GenRealPersonVerificationTokenRequest::getCertificateName()const
{
	return certificateName_;
}

void GenRealPersonVerificationTokenRequest::setCertificateName(const std::string& certificateName)
{
	certificateName_ = certificateName;
	setBodyParameter("CertificateName", certificateName);
}

