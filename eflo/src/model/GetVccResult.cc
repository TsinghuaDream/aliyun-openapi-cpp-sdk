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

#include <alibabacloud/eflo/model/GetVccResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetVccResult::GetVccResult() :
	ServiceResult()
{}

GetVccResult::GetVccResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVccResult::~GetVccResult()
{}

void GetVccResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["TenantId"].isNull())
		content_.tenantId = contentNode["TenantId"].asString();
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["VccId"].isNull())
		content_.vccId = contentNode["VccId"].asString();
	if(!contentNode["VpdId"].isNull())
		content_.vpdId = contentNode["VpdId"].asString();
	if(!contentNode["VpcId"].isNull())
		content_.vpcId = contentNode["VpcId"].asString();
	if(!contentNode["VSwitchId"].isNull())
		content_.vSwitchId = contentNode["VSwitchId"].asString();
	if(!contentNode["CenId"].isNull())
		content_.cenId = contentNode["CenId"].asString();
	if(!contentNode["VccName"].isNull())
		content_.vccName = contentNode["VccName"].asString();
	if(!contentNode["AccessPointId"].isNull())
		content_.accessPointId = contentNode["AccessPointId"].asString();
	if(!contentNode["LineOperator"].isNull())
		content_.lineOperator = contentNode["LineOperator"].asString();
	if(!contentNode["Spec"].isNull())
		content_.spec = contentNode["Spec"].asString();
	if(!contentNode["PortType"].isNull())
		content_.portType = contentNode["PortType"].asString();
	if(!contentNode["PricingCycle"].isNull())
		content_.pricingCycle = contentNode["PricingCycle"].asString();
	if(!contentNode["PayType"].isNull())
		content_.payType = contentNode["PayType"].asString();
	if(!contentNode["Duration"].isNull())
		content_.duration = contentNode["Duration"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["CurrentNode"].isNull())
		content_.currentNode = contentNode["CurrentNode"].asString();
	if(!contentNode["InternetChargeType"].isNull())
		content_.internetChargeType = contentNode["InternetChargeType"].asString();
	if(!contentNode["BandwidthStr"].isNull())
		content_.bandwidthStr = contentNode["BandwidthStr"].asString();
	if(!contentNode["Message"].isNull())
		content_.message = contentNode["Message"].asString();
	if(!contentNode["CreateTime"].isNull())
		content_.createTime = contentNode["CreateTime"].asString();
	if(!contentNode["GmtModified"].isNull())
		content_.gmtModified = contentNode["GmtModified"].asString();
	if(!contentNode["CommodityCode"].isNull())
		content_.commodityCode = contentNode["CommodityCode"].asString();
	if(!contentNode["BgpCidr"].isNull())
		content_.bgpCidr = contentNode["BgpCidr"].asString();
	auto allAliyunRouterInfoNode = contentNode["AliyunRouterInfo"]["AliyunRouterInfoItem"];
	for (auto contentNodeAliyunRouterInfoAliyunRouterInfoItem : allAliyunRouterInfoNode)
	{
		Content::AliyunRouterInfoItem aliyunRouterInfoItemObject;
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["PcId"].isNull())
			aliyunRouterInfoItemObject.pcId = contentNodeAliyunRouterInfoAliyunRouterInfoItem["PcId"].asString();
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["VbrId"].isNull())
			aliyunRouterInfoItemObject.vbrId = contentNodeAliyunRouterInfoAliyunRouterInfoItem["VbrId"].asString();
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["LocalGatewayIp"].isNull())
			aliyunRouterInfoItemObject.localGatewayIp = contentNodeAliyunRouterInfoAliyunRouterInfoItem["LocalGatewayIp"].asString();
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["PeerGatewayIp"].isNull())
			aliyunRouterInfoItemObject.peerGatewayIp = contentNodeAliyunRouterInfoAliyunRouterInfoItem["PeerGatewayIp"].asString();
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["Mask"].isNull())
			aliyunRouterInfoItemObject.mask = contentNodeAliyunRouterInfoAliyunRouterInfoItem["Mask"].asString();
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["VlanId"].isNull())
			aliyunRouterInfoItemObject.vlanId = contentNodeAliyunRouterInfoAliyunRouterInfoItem["VlanId"].asString();
		content_.aliyunRouterInfo.push_back(aliyunRouterInfoItemObject);
	}
	auto allCisRouterInfoNode = contentNode["CisRouterInfo"]["CisRouterInfoItem"];
	for (auto contentNodeCisRouterInfoCisRouterInfoItem : allCisRouterInfoNode)
	{
		Content::CisRouterInfoItem cisRouterInfoItemObject;
		if(!contentNodeCisRouterInfoCisRouterInfoItem["CcrId"].isNull())
			cisRouterInfoItemObject.ccrId = contentNodeCisRouterInfoCisRouterInfoItem["CcrId"].asString();
		auto allCcInfosNode = contentNodeCisRouterInfoCisRouterInfoItem["CcInfos"]["CcInfo"];
		for (auto contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo : allCcInfosNode)
		{
			Content::CisRouterInfoItem::CcInfo ccInfosObject;
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["CcId"].isNull())
				ccInfosObject.ccId = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["CcId"].asString();
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["VlanId"].isNull())
				ccInfosObject.vlanId = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["VlanId"].asString();
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["LocalGatewayIp"].isNull())
				ccInfosObject.localGatewayIp = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["LocalGatewayIp"].asString();
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["RemoteGatewayIp"].isNull())
				ccInfosObject.remoteGatewayIp = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["RemoteGatewayIp"].asString();
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["SubnetMask"].isNull())
				ccInfosObject.subnetMask = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["SubnetMask"].asString();
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["Status"].isNull())
				ccInfosObject.status = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["Status"].asString();
			cisRouterInfoItemObject.ccInfos.push_back(ccInfosObject);
		}
		content_.cisRouterInfo.push_back(cisRouterInfoItemObject);
	}
	auto vpdBaseInfoNode = contentNode["VpdBaseInfo"];
	if(!vpdBaseInfoNode["VpdId"].isNull())
		content_.vpdBaseInfo.vpdId = vpdBaseInfoNode["VpdId"].asString();
	if(!vpdBaseInfoNode["Name"].isNull())
		content_.vpdBaseInfo.name = vpdBaseInfoNode["Name"].asString();
	if(!vpdBaseInfoNode["Cidr"].isNull())
		content_.vpdBaseInfo.cidr = vpdBaseInfoNode["Cidr"].asString();
	if(!vpdBaseInfoNode["GmtCreate"].isNull())
		content_.vpdBaseInfo.gmtCreate = vpdBaseInfoNode["GmtCreate"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetVccResult::getMessage()const
{
	return message_;
}

GetVccResult::Content GetVccResult::getContent()const
{
	return content_;
}

int GetVccResult::getCode()const
{
	return code_;
}

