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

#include <alibabacloud/ecs/model/DescribeRenewalPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeRenewalPriceResult::DescribeRenewalPriceResult() :
	ServiceResult()
{}

DescribeRenewalPriceResult::DescribeRenewalPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRenewalPriceResult::~DescribeRenewalPriceResult()
{}

void DescribeRenewalPriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto priceInfoNode = value["PriceInfo"];
	auto allRulesNode = priceInfoNode["Rules"]["Rule"];
	for (auto priceInfoNodeRulesRule : allRulesNode)
	{
		PriceInfo::Rule ruleObject;
		if(!priceInfoNodeRulesRule["Description"].isNull())
			ruleObject.description = priceInfoNodeRulesRule["Description"].asString();
		if(!priceInfoNodeRulesRule["RuleId"].isNull())
			ruleObject.ruleId = std::stol(priceInfoNodeRulesRule["RuleId"].asString());
		priceInfo_.rules.push_back(ruleObject);
	}
	auto priceNode = priceInfoNode["Price"];
	if(!priceNode["OriginalPrice"].isNull())
		priceInfo_.price.originalPrice = std::stof(priceNode["OriginalPrice"].asString());
	if(!priceNode["DiscountPrice"].isNull())
		priceInfo_.price.discountPrice = std::stof(priceNode["DiscountPrice"].asString());
	if(!priceNode["Currency"].isNull())
		priceInfo_.price.currency = priceNode["Currency"].asString();
	if(!priceNode["TradePrice"].isNull())
		priceInfo_.price.tradePrice = std::stof(priceNode["TradePrice"].asString());
	if(!priceNode["StandardPrice"].isNull())
		priceInfo_.price.standardPrice = std::stof(priceNode["StandardPrice"].asString());
	if(!priceNode["StandardDiscountPrice"].isNull())
		priceInfo_.price.standardDiscountPrice = std::stof(priceNode["StandardDiscountPrice"].asString());
	if(!priceNode["IsContractPromotion"].isNull())
		priceInfo_.price.isContractPromotion = priceNode["IsContractPromotion"].asString() == "true";
	auto allDetailInfosNode = priceNode["DetailInfos"]["DetailInfo"];
	for (auto priceNodeDetailInfosDetailInfo : allDetailInfosNode)
	{
		PriceInfo::Price::DetailInfo detailInfoObject;
		if(!priceNodeDetailInfosDetailInfo["Resource"].isNull())
			detailInfoObject.resource = priceNodeDetailInfosDetailInfo["Resource"].asString();
		if(!priceNodeDetailInfosDetailInfo["OriginalPrice"].isNull())
			detailInfoObject.originalPrice = std::stof(priceNodeDetailInfosDetailInfo["OriginalPrice"].asString());
		if(!priceNodeDetailInfosDetailInfo["DiscountPrice"].isNull())
			detailInfoObject.discountPrice = std::stof(priceNodeDetailInfosDetailInfo["DiscountPrice"].asString());
		if(!priceNodeDetailInfosDetailInfo["TradePrice"].isNull())
			detailInfoObject.tradePrice = std::stof(priceNodeDetailInfosDetailInfo["TradePrice"].asString());
		if(!priceNodeDetailInfosDetailInfo["StandardPrice"].isNull())
			detailInfoObject.standardPrice = std::stof(priceNodeDetailInfosDetailInfo["StandardPrice"].asString());
		if(!priceNodeDetailInfosDetailInfo["StandardDiscountPrice"].isNull())
			detailInfoObject.standardDiscountPrice = std::stof(priceNodeDetailInfosDetailInfo["StandardDiscountPrice"].asString());
		if(!priceNodeDetailInfosDetailInfo["IsContractPromotion"].isNull())
			detailInfoObject.isContractPromotion = priceNodeDetailInfosDetailInfo["IsContractPromotion"].asString() == "true";
		auto allSubRulesNode = priceNodeDetailInfosDetailInfo["SubRules"]["Rule"];
		for (auto priceNodeDetailInfosDetailInfoSubRulesRule : allSubRulesNode)
		{
			PriceInfo::Price::DetailInfo::Rule2 subRulesObject;
			if(!priceNodeDetailInfosDetailInfoSubRulesRule["Description"].isNull())
				subRulesObject.description = priceNodeDetailInfosDetailInfoSubRulesRule["Description"].asString();
			if(!priceNodeDetailInfosDetailInfoSubRulesRule["RuleId"].isNull())
				subRulesObject.ruleId = std::stol(priceNodeDetailInfosDetailInfoSubRulesRule["RuleId"].asString());
			detailInfoObject.subRules.push_back(subRulesObject);
		}
		auto allAttributesNode = priceNodeDetailInfosDetailInfo["Attributes"]["Attribute"];
		for (auto priceNodeDetailInfosDetailInfoAttributesAttribute : allAttributesNode)
		{
			PriceInfo::Price::DetailInfo::Attribute attributesObject;
			if(!priceNodeDetailInfosDetailInfoAttributesAttribute["Code"].isNull())
				attributesObject.code = priceNodeDetailInfosDetailInfoAttributesAttribute["Code"].asString();
			if(!priceNodeDetailInfosDetailInfoAttributesAttribute["Value"].isNull())
				attributesObject.value = priceNodeDetailInfosDetailInfoAttributesAttribute["Value"].asString();
			detailInfoObject.attributes.push_back(attributesObject);
		}
		auto depreciateInfo1Node = value["DepreciateInfo"];
		if(!depreciateInfo1Node["ListPrice"].isNull())
			detailInfoObject.depreciateInfo1.listPrice = std::stof(depreciateInfo1Node["ListPrice"].asString());
		if(!depreciateInfo1Node["OriginalStandardPrice"].isNull())
			detailInfoObject.depreciateInfo1.originalStandardPrice = std::stof(depreciateInfo1Node["OriginalStandardPrice"].asString());
		if(!depreciateInfo1Node["CheapStandardPrice"].isNull())
			detailInfoObject.depreciateInfo1.cheapStandardPrice = std::stof(depreciateInfo1Node["CheapStandardPrice"].asString());
		if(!depreciateInfo1Node["CheapRate"].isNull())
			detailInfoObject.depreciateInfo1.cheapRate = std::stof(depreciateInfo1Node["CheapRate"].asString());
		if(!depreciateInfo1Node["DifferentialPrice"].isNull())
			detailInfoObject.depreciateInfo1.differentialPrice = std::stof(depreciateInfo1Node["DifferentialPrice"].asString());
		if(!depreciateInfo1Node["DifferentialName"].isNull())
			detailInfoObject.depreciateInfo1.differentialName = depreciateInfo1Node["DifferentialName"].asString();
		if(!depreciateInfo1Node["MonthPrice"].isNull())
			detailInfoObject.depreciateInfo1.monthPrice = std::stof(depreciateInfo1Node["MonthPrice"].asString());
		if(!depreciateInfo1Node["IsShow"].isNull())
			detailInfoObject.depreciateInfo1.isShow = depreciateInfo1Node["IsShow"].asString() == "true";
		if(!depreciateInfo1Node["StartTime"].isNull())
			detailInfoObject.depreciateInfo1.startTime = depreciateInfo1Node["StartTime"].asString();
		priceInfo_.price.detailInfos.push_back(detailInfoObject);
	}
	auto allCouponsNode = priceNode["Coupons"]["Coupon"];
	for (auto priceNodeCouponsCoupon : allCouponsNode)
	{
		PriceInfo::Price::Coupon couponObject;
		if(!priceNodeCouponsCoupon["IsSelected"].isNull())
			couponObject.isSelected = priceNodeCouponsCoupon["IsSelected"].asString() == "true";
		if(!priceNodeCouponsCoupon["CouponNo"].isNull())
			couponObject.couponNo = priceNodeCouponsCoupon["CouponNo"].asString();
		if(!priceNodeCouponsCoupon["Description"].isNull())
			couponObject.description = priceNodeCouponsCoupon["Description"].asString();
		if(!priceNodeCouponsCoupon["Name"].isNull())
			couponObject.name = priceNodeCouponsCoupon["Name"].asString();
		if(!priceNodeCouponsCoupon["DiscountOff"].isNull())
			couponObject.discountOff = std::stof(priceNodeCouponsCoupon["DiscountOff"].asString());
		if(!priceNodeCouponsCoupon["OptionCode"].isNull())
			couponObject.optionCode = priceNodeCouponsCoupon["OptionCode"].asString();
		auto allRuleIds = value["RuleIds"]["RuleId"];
		for (auto value : allRuleIds)
			couponObject.ruleIds.push_back(value.asString());
		priceInfo_.price.coupons.push_back(couponObject);
	}
	auto allSubPricesNode = priceNode["SubPrices"]["SubPrice"];
	for (auto priceNodeSubPricesSubPrice : allSubPricesNode)
	{
		PriceInfo::Price::SubPrice subPriceObject;
		if(!priceNodeSubPricesSubPrice["OriginalPrice"].isNull())
			subPriceObject.originalPrice = std::stof(priceNodeSubPricesSubPrice["OriginalPrice"].asString());
		if(!priceNodeSubPricesSubPrice["InstanceId"].isNull())
			subPriceObject.instanceId = priceNodeSubPricesSubPrice["InstanceId"].asString();
		if(!priceNodeSubPricesSubPrice["DiscountPrice"].isNull())
			subPriceObject.discountPrice = std::stof(priceNodeSubPricesSubPrice["DiscountPrice"].asString());
		if(!priceNodeSubPricesSubPrice["TradePrice"].isNull())
			subPriceObject.tradePrice = std::stof(priceNodeSubPricesSubPrice["TradePrice"].asString());
		if(!priceNodeSubPricesSubPrice["StandardPrice"].isNull())
			subPriceObject.standardPrice = std::stof(priceNodeSubPricesSubPrice["StandardPrice"].asString());
		if(!priceNodeSubPricesSubPrice["StandardDiscountPrice"].isNull())
			subPriceObject.standardDiscountPrice = std::stof(priceNodeSubPricesSubPrice["StandardDiscountPrice"].asString());
		if(!priceNodeSubPricesSubPrice["IsContractPromotion"].isNull())
			subPriceObject.isContractPromotion = priceNodeSubPricesSubPrice["IsContractPromotion"].asString() == "true";
		auto allPromotions5Node = priceNodeSubPricesSubPrice["Promotions"]["Promotion"];
		for (auto priceNodeSubPricesSubPricePromotionsPromotion : allPromotions5Node)
		{
			PriceInfo::Price::SubPrice::Promotion promotions5Object;
			if(!priceNodeSubPricesSubPricePromotionsPromotion["Name"].isNull())
				promotions5Object.name = priceNodeSubPricesSubPricePromotionsPromotion["Name"].asString();
			if(!priceNodeSubPricesSubPricePromotionsPromotion["DiscountOff"].isNull())
				promotions5Object.discountOff = std::stof(priceNodeSubPricesSubPricePromotionsPromotion["DiscountOff"].asString());
			if(!priceNodeSubPricesSubPricePromotionsPromotion["Type"].isNull())
				promotions5Object.type = priceNodeSubPricesSubPricePromotionsPromotion["Type"].asString();
			if(!priceNodeSubPricesSubPricePromotionsPromotion["RemainQuota"].isNull())
				promotions5Object.remainQuota = std::stof(priceNodeSubPricesSubPricePromotionsPromotion["RemainQuota"].asString());
			auto allRuleIds6 = value["RuleIds"]["RuleId"];
			for (auto value : allRuleIds6)
				promotions5Object.ruleIds6.push_back(value.asString());
			subPriceObject.promotions5.push_back(promotions5Object);
		}
		auto depreciateInfo4Node = value["DepreciateInfo"];
		if(!depreciateInfo4Node["ListPrice"].isNull())
			subPriceObject.depreciateInfo4.listPrice = std::stof(depreciateInfo4Node["ListPrice"].asString());
		if(!depreciateInfo4Node["OriginalStandardPrice"].isNull())
			subPriceObject.depreciateInfo4.originalStandardPrice = std::stof(depreciateInfo4Node["OriginalStandardPrice"].asString());
		if(!depreciateInfo4Node["CheapStandardPrice"].isNull())
			subPriceObject.depreciateInfo4.cheapStandardPrice = std::stof(depreciateInfo4Node["CheapStandardPrice"].asString());
		if(!depreciateInfo4Node["CheapRate"].isNull())
			subPriceObject.depreciateInfo4.cheapRate = std::stof(depreciateInfo4Node["CheapRate"].asString());
		if(!depreciateInfo4Node["DifferentialPrice"].isNull())
			subPriceObject.depreciateInfo4.differentialPrice = std::stof(depreciateInfo4Node["DifferentialPrice"].asString());
		if(!depreciateInfo4Node["DifferentialName"].isNull())
			subPriceObject.depreciateInfo4.differentialName = depreciateInfo4Node["DifferentialName"].asString();
		if(!depreciateInfo4Node["MonthPrice"].isNull())
			subPriceObject.depreciateInfo4.monthPrice = std::stof(depreciateInfo4Node["MonthPrice"].asString());
		if(!depreciateInfo4Node["IsShow"].isNull())
			subPriceObject.depreciateInfo4.isShow = depreciateInfo4Node["IsShow"].asString() == "true";
		if(!depreciateInfo4Node["StartTime"].isNull())
			subPriceObject.depreciateInfo4.startTime = depreciateInfo4Node["StartTime"].asString();
		auto allRuleIdSet3 = value["RuleIdSet"]["RuleId"];
		for (auto value : allRuleIdSet3)
			subPriceObject.ruleIdSet3.push_back(value.asString());
		priceInfo_.price.subPrices.push_back(subPriceObject);
	}
	auto allPromotionsNode = priceNode["Promotions"]["Promotion"];
	for (auto priceNodePromotionsPromotion : allPromotionsNode)
	{
		PriceInfo::Price::Promotion7 promotion7Object;
		if(!priceNodePromotionsPromotion["Name"].isNull())
			promotion7Object.name = priceNodePromotionsPromotion["Name"].asString();
		if(!priceNodePromotionsPromotion["DiscountOff"].isNull())
			promotion7Object.discountOff = std::stof(priceNodePromotionsPromotion["DiscountOff"].asString());
		if(!priceNodePromotionsPromotion["Type"].isNull())
			promotion7Object.type = priceNodePromotionsPromotion["Type"].asString();
		if(!priceNodePromotionsPromotion["RemainQuota"].isNull())
			promotion7Object.remainQuota = std::stof(priceNodePromotionsPromotion["RemainQuota"].asString());
		auto allRuleIds8 = value["RuleIds"]["RuleId"];
		for (auto value : allRuleIds8)
			promotion7Object.ruleIds8.push_back(value.asString());
		priceInfo_.price.promotions.push_back(promotion7Object);
	}
	auto depreciateInfoNode = priceNode["DepreciateInfo"];
	if(!depreciateInfoNode["ListPrice"].isNull())
		priceInfo_.price.depreciateInfo.listPrice = std::stof(depreciateInfoNode["ListPrice"].asString());
	if(!depreciateInfoNode["OriginalStandardPrice"].isNull())
		priceInfo_.price.depreciateInfo.originalStandardPrice = std::stof(depreciateInfoNode["OriginalStandardPrice"].asString());
	if(!depreciateInfoNode["CheapStandardPrice"].isNull())
		priceInfo_.price.depreciateInfo.cheapStandardPrice = std::stof(depreciateInfoNode["CheapStandardPrice"].asString());
	if(!depreciateInfoNode["CheapRate"].isNull())
		priceInfo_.price.depreciateInfo.cheapRate = std::stof(depreciateInfoNode["CheapRate"].asString());
	if(!depreciateInfoNode["DifferentialPrice"].isNull())
		priceInfo_.price.depreciateInfo.differentialPrice = std::stof(depreciateInfoNode["DifferentialPrice"].asString());
	if(!depreciateInfoNode["DifferentialName"].isNull())
		priceInfo_.price.depreciateInfo.differentialName = depreciateInfoNode["DifferentialName"].asString();
	if(!depreciateInfoNode["MonthPrice"].isNull())
		priceInfo_.price.depreciateInfo.monthPrice = std::stof(depreciateInfoNode["MonthPrice"].asString());
	if(!depreciateInfoNode["IsShow"].isNull())
		priceInfo_.price.depreciateInfo.isShow = depreciateInfoNode["IsShow"].asString() == "true";
	if(!depreciateInfoNode["StartTime"].isNull())
		priceInfo_.price.depreciateInfo.startTime = depreciateInfoNode["StartTime"].asString();
		auto allRuleIdSet = priceNode["RuleIdSet"]["RuleId"];
		for (auto value : allRuleIdSet)
			priceInfo_.price.ruleIdSet.push_back(value.asString());
	auto priceWarningNode = priceInfoNode["PriceWarning"];
	if(!priceWarningNode["Msg"].isNull())
		priceInfo_.priceWarning.msg = priceWarningNode["Msg"].asString();
	if(!priceWarningNode["Code"].isNull())
		priceInfo_.priceWarning.code = priceWarningNode["Code"].asString();

}

DescribeRenewalPriceResult::PriceInfo DescribeRenewalPriceResult::getPriceInfo()const
{
	return priceInfo_;
}

