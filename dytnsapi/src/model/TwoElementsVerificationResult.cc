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

#include <alibabacloud/dytnsapi/model/TwoElementsVerificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dytnsapi;
using namespace AlibabaCloud::Dytnsapi::Model;

TwoElementsVerificationResult::TwoElementsVerificationResult() :
	ServiceResult()
{}

TwoElementsVerificationResult::TwoElementsVerificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TwoElementsVerificationResult::~TwoElementsVerificationResult()
{}

void TwoElementsVerificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["IsConsistent"].isNull())
		data_.isConsistent = std::stoi(dataNode["IsConsistent"].asString());
	if(!dataNode["BasicCarrier"].isNull())
		data_.basicCarrier = dataNode["BasicCarrier"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string TwoElementsVerificationResult::getMessage()const
{
	return message_;
}

TwoElementsVerificationResult::Data TwoElementsVerificationResult::getData()const
{
	return data_;
}

std::string TwoElementsVerificationResult::getCode()const
{
	return code_;
}

