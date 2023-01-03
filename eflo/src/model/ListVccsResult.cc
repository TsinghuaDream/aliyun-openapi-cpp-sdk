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

#include <alibabacloud/eflo/model/ListVccsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListVccsResult::ListVccsResult() :
	ServiceResult()
{}

ListVccsResult::ListVccsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVccsResult::~ListVccsResult()
{}

void ListVccsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["Total"].isNull())
		content_.total = std::stol(contentNode["Total"].asString());
	auto allDataNode = contentNode["Data"]["DataItem"];
	for (auto contentNodeDataDataItem : allDataNode)
	{
		Content::DataItem dataItemObject;
		if(!contentNodeDataDataItem["TenantId"].isNull())
			dataItemObject.tenantId = contentNodeDataDataItem["TenantId"].asString();
		if(!contentNodeDataDataItem["RegionId"].isNull())
			dataItemObject.regionId = contentNodeDataDataItem["RegionId"].asString();
		if(!contentNodeDataDataItem["VccId"].isNull())
			dataItemObject.vccId = contentNodeDataDataItem["VccId"].asString();
		if(!contentNodeDataDataItem["VpdId"].isNull())
			dataItemObject.vpdId = contentNodeDataDataItem["VpdId"].asString();
		if(!contentNodeDataDataItem["VpcId"].isNull())
			dataItemObject.vpcId = contentNodeDataDataItem["VpcId"].asString();
		if(!contentNodeDataDataItem["CenId"].isNull())
			dataItemObject.cenId = contentNodeDataDataItem["CenId"].asString();
		if(!contentNodeDataDataItem["VccName"].isNull())
			dataItemObject.vccName = contentNodeDataDataItem["VccName"].asString();
		if(!contentNodeDataDataItem["AccessPointId"].isNull())
			dataItemObject.accessPointId = contentNodeDataDataItem["AccessPointId"].asString();
		if(!contentNodeDataDataItem["LineOperator"].isNull())
			dataItemObject.lineOperator = contentNodeDataDataItem["LineOperator"].asString();
		if(!contentNodeDataDataItem["Spec"].isNull())
			dataItemObject.spec = contentNodeDataDataItem["Spec"].asString();
		if(!contentNodeDataDataItem["PortType"].isNull())
			dataItemObject.portType = contentNodeDataDataItem["PortType"].asString();
		if(!contentNodeDataDataItem["Status"].isNull())
			dataItemObject.status = contentNodeDataDataItem["Status"].asString();
		if(!contentNodeDataDataItem["Message"].isNull())
			dataItemObject.message = contentNodeDataDataItem["Message"].asString();
		if(!contentNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = contentNodeDataDataItem["CreateTime"].asString();
		if(!contentNodeDataDataItem["GmtModified"].isNull())
			dataItemObject.gmtModified = contentNodeDataDataItem["GmtModified"].asString();
		if(!contentNodeDataDataItem["Rate"].isNull())
			dataItemObject.rate = contentNodeDataDataItem["Rate"].asString();
		if(!contentNodeDataDataItem["BandwidthStr"].isNull())
			dataItemObject.bandwidthStr = contentNodeDataDataItem["BandwidthStr"].asString();
		if(!contentNodeDataDataItem["BgpCidr"].isNull())
			dataItemObject.bgpCidr = contentNodeDataDataItem["BgpCidr"].asString();
		auto vpdBaseInfoNode = value["VpdBaseInfo"];
		if(!vpdBaseInfoNode["VpdId"].isNull())
			dataItemObject.vpdBaseInfo.vpdId = vpdBaseInfoNode["VpdId"].asString();
		if(!vpdBaseInfoNode["Name"].isNull())
			dataItemObject.vpdBaseInfo.name = vpdBaseInfoNode["Name"].asString();
		if(!vpdBaseInfoNode["Cidr"].isNull())
			dataItemObject.vpdBaseInfo.cidr = vpdBaseInfoNode["Cidr"].asString();
		if(!vpdBaseInfoNode["GmtCreate"].isNull())
			dataItemObject.vpdBaseInfo.gmtCreate = vpdBaseInfoNode["GmtCreate"].asString();
		content_.data.push_back(dataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListVccsResult::getMessage()const
{
	return message_;
}

ListVccsResult::Content ListVccsResult::getContent()const
{
	return content_;
}

int ListVccsResult::getCode()const
{
	return code_;
}

