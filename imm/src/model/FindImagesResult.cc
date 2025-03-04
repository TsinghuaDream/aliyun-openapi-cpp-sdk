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

#include <alibabacloud/imm/model/FindImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

FindImagesResult::FindImagesResult() :
	ServiceResult()
{}

FindImagesResult::FindImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindImagesResult::~FindImagesResult()
{}

void FindImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["ImagesItem"];
	for (auto valueImagesImagesItem : allImagesNode)
	{
		ImagesItem imagesObject;
		if(!valueImagesImagesItem["CroppingSuggestionStatus"].isNull())
			imagesObject.croppingSuggestionStatus = valueImagesImagesItem["CroppingSuggestionStatus"].asString();
		if(!valueImagesImagesItem["ImageQualityModifyTime"].isNull())
			imagesObject.imageQualityModifyTime = valueImagesImagesItem["ImageQualityModifyTime"].asString();
		if(!valueImagesImagesItem["TagsFailReason"].isNull())
			imagesObject.tagsFailReason = valueImagesImagesItem["TagsFailReason"].asString();
		if(!valueImagesImagesItem["RemarksC"].isNull())
			imagesObject.remarksC = valueImagesImagesItem["RemarksC"].asString();
		if(!valueImagesImagesItem["CreateTime"].isNull())
			imagesObject.createTime = valueImagesImagesItem["CreateTime"].asString();
		if(!valueImagesImagesItem["SourceType"].isNull())
			imagesObject.sourceType = valueImagesImagesItem["SourceType"].asString();
		if(!valueImagesImagesItem["FacesFailReason"].isNull())
			imagesObject.facesFailReason = valueImagesImagesItem["FacesFailReason"].asString();
		if(!valueImagesImagesItem["FacesModifyTime"].isNull())
			imagesObject.facesModifyTime = valueImagesImagesItem["FacesModifyTime"].asString();
		if(!valueImagesImagesItem["ImageTime"].isNull())
			imagesObject.imageTime = valueImagesImagesItem["ImageTime"].asString();
		if(!valueImagesImagesItem["OCRModifyTime"].isNull())
			imagesObject.oCRModifyTime = valueImagesImagesItem["OCRModifyTime"].asString();
		if(!valueImagesImagesItem["AddressModifyTime"].isNull())
			imagesObject.addressModifyTime = valueImagesImagesItem["AddressModifyTime"].asString();
		if(!valueImagesImagesItem["ImageQualityFailReason"].isNull())
			imagesObject.imageQualityFailReason = valueImagesImagesItem["ImageQualityFailReason"].asString();
		if(!valueImagesImagesItem["FacesStatus"].isNull())
			imagesObject.facesStatus = valueImagesImagesItem["FacesStatus"].asString();
		if(!valueImagesImagesItem["ImageHeight"].isNull())
			imagesObject.imageHeight = std::stoi(valueImagesImagesItem["ImageHeight"].asString());
		if(!valueImagesImagesItem["RemarksArrayA"].isNull())
			imagesObject.remarksArrayA = valueImagesImagesItem["RemarksArrayA"].asString();
		if(!valueImagesImagesItem["ExternalId"].isNull())
			imagesObject.externalId = valueImagesImagesItem["ExternalId"].asString();
		if(!valueImagesImagesItem["SourceUri"].isNull())
			imagesObject.sourceUri = valueImagesImagesItem["SourceUri"].asString();
		if(!valueImagesImagesItem["ModifyTime"].isNull())
			imagesObject.modifyTime = valueImagesImagesItem["ModifyTime"].asString();
		if(!valueImagesImagesItem["FileSize"].isNull())
			imagesObject.fileSize = std::stoi(valueImagesImagesItem["FileSize"].asString());
		if(!valueImagesImagesItem["SourcePosition"].isNull())
			imagesObject.sourcePosition = valueImagesImagesItem["SourcePosition"].asString();
		if(!valueImagesImagesItem["ImageQualityStatus"].isNull())
			imagesObject.imageQualityStatus = valueImagesImagesItem["ImageQualityStatus"].asString();
		if(!valueImagesImagesItem["OCRFailReason"].isNull())
			imagesObject.oCRFailReason = valueImagesImagesItem["OCRFailReason"].asString();
		if(!valueImagesImagesItem["AddressFailReason"].isNull())
			imagesObject.addressFailReason = valueImagesImagesItem["AddressFailReason"].asString();
		if(!valueImagesImagesItem["CroppingSuggestionModifyTime"].isNull())
			imagesObject.croppingSuggestionModifyTime = valueImagesImagesItem["CroppingSuggestionModifyTime"].asString();
		if(!valueImagesImagesItem["ImageFormat"].isNull())
			imagesObject.imageFormat = valueImagesImagesItem["ImageFormat"].asString();
		if(!valueImagesImagesItem["ImageWidth"].isNull())
			imagesObject.imageWidth = std::stoi(valueImagesImagesItem["ImageWidth"].asString());
		if(!valueImagesImagesItem["RemarksArrayB"].isNull())
			imagesObject.remarksArrayB = valueImagesImagesItem["RemarksArrayB"].asString();
		if(!valueImagesImagesItem["Orientation"].isNull())
			imagesObject.orientation = valueImagesImagesItem["Orientation"].asString();
		if(!valueImagesImagesItem["RemarksD"].isNull())
			imagesObject.remarksD = valueImagesImagesItem["RemarksD"].asString();
		if(!valueImagesImagesItem["TagsStatus"].isNull())
			imagesObject.tagsStatus = valueImagesImagesItem["TagsStatus"].asString();
		if(!valueImagesImagesItem["CroppingSuggestionFailReason"].isNull())
			imagesObject.croppingSuggestionFailReason = valueImagesImagesItem["CroppingSuggestionFailReason"].asString();
		if(!valueImagesImagesItem["RemarksA"].isNull())
			imagesObject.remarksA = valueImagesImagesItem["RemarksA"].asString();
		if(!valueImagesImagesItem["ImageUri"].isNull())
			imagesObject.imageUri = valueImagesImagesItem["ImageUri"].asString();
		if(!valueImagesImagesItem["TagsModifyTime"].isNull())
			imagesObject.tagsModifyTime = valueImagesImagesItem["TagsModifyTime"].asString();
		if(!valueImagesImagesItem["OCRStatus"].isNull())
			imagesObject.oCRStatus = valueImagesImagesItem["OCRStatus"].asString();
		if(!valueImagesImagesItem["AddressStatus"].isNull())
			imagesObject.addressStatus = valueImagesImagesItem["AddressStatus"].asString();
		if(!valueImagesImagesItem["Exif"].isNull())
			imagesObject.exif = valueImagesImagesItem["Exif"].asString();
		if(!valueImagesImagesItem["Location"].isNull())
			imagesObject.location = valueImagesImagesItem["Location"].asString();
		if(!valueImagesImagesItem["RemarksB"].isNull())
			imagesObject.remarksB = valueImagesImagesItem["RemarksB"].asString();
		auto allTagsNode = valueImagesImagesItem["Tags"]["TagsItem"];
		for (auto valueImagesImagesItemTagsTagsItem : allTagsNode)
		{
			ImagesItem::TagsItem tagsObject;
			if(!valueImagesImagesItemTagsTagsItem["TagConfidence"].isNull())
				tagsObject.tagConfidence = std::stof(valueImagesImagesItemTagsTagsItem["TagConfidence"].asString());
			if(!valueImagesImagesItemTagsTagsItem["CentricScore"].isNull())
				tagsObject.centricScore = std::stof(valueImagesImagesItemTagsTagsItem["CentricScore"].asString());
			if(!valueImagesImagesItemTagsTagsItem["TagName"].isNull())
				tagsObject.tagName = valueImagesImagesItemTagsTagsItem["TagName"].asString();
			if(!valueImagesImagesItemTagsTagsItem["TagLevel"].isNull())
				tagsObject.tagLevel = std::stoi(valueImagesImagesItemTagsTagsItem["TagLevel"].asString());
			if(!valueImagesImagesItemTagsTagsItem["ParentTagName"].isNull())
				tagsObject.parentTagName = valueImagesImagesItemTagsTagsItem["ParentTagName"].asString();
			imagesObject.tags.push_back(tagsObject);
		}
		auto allOCRNode = valueImagesImagesItem["OCR"]["OCRItem"];
		for (auto valueImagesImagesItemOCROCRItem : allOCRNode)
		{
			ImagesItem::OCRItem oCRObject;
			if(!valueImagesImagesItemOCROCRItem["OCRConfidence"].isNull())
				oCRObject.oCRConfidence = std::stof(valueImagesImagesItemOCROCRItem["OCRConfidence"].asString());
			if(!valueImagesImagesItemOCROCRItem["OCRContents"].isNull())
				oCRObject.oCRContents = valueImagesImagesItemOCROCRItem["OCRContents"].asString();
			auto oCRBoundaryNode = value["OCRBoundary"];
			if(!oCRBoundaryNode["Top"].isNull())
				oCRObject.oCRBoundary.top = std::stoi(oCRBoundaryNode["Top"].asString());
			if(!oCRBoundaryNode["Width"].isNull())
				oCRObject.oCRBoundary.width = std::stoi(oCRBoundaryNode["Width"].asString());
			if(!oCRBoundaryNode["Height"].isNull())
				oCRObject.oCRBoundary.height = std::stoi(oCRBoundaryNode["Height"].asString());
			if(!oCRBoundaryNode["Left"].isNull())
				oCRObject.oCRBoundary.left = std::stoi(oCRBoundaryNode["Left"].asString());
			imagesObject.oCR.push_back(oCRObject);
		}
		auto allFacesNode = valueImagesImagesItem["Faces"]["FacesItem"];
		for (auto valueImagesImagesItemFacesFacesItem : allFacesNode)
		{
			ImagesItem::FacesItem facesObject;
			if(!valueImagesImagesItemFacesFacesItem["Gender"].isNull())
				facesObject.gender = valueImagesImagesItemFacesFacesItem["Gender"].asString();
			if(!valueImagesImagesItemFacesFacesItem["FaceId"].isNull())
				facesObject.faceId = valueImagesImagesItemFacesFacesItem["FaceId"].asString();
			if(!valueImagesImagesItemFacesFacesItem["GenderConfidence"].isNull())
				facesObject.genderConfidence = std::stof(valueImagesImagesItemFacesFacesItem["GenderConfidence"].asString());
			if(!valueImagesImagesItemFacesFacesItem["FaceQuality"].isNull())
				facesObject.faceQuality = std::stof(valueImagesImagesItemFacesFacesItem["FaceQuality"].asString());
			if(!valueImagesImagesItemFacesFacesItem["Emotion"].isNull())
				facesObject.emotion = valueImagesImagesItemFacesFacesItem["Emotion"].asString();
			if(!valueImagesImagesItemFacesFacesItem["Age"].isNull())
				facesObject.age = std::stoi(valueImagesImagesItemFacesFacesItem["Age"].asString());
			if(!valueImagesImagesItemFacesFacesItem["FaceConfidence"].isNull())
				facesObject.faceConfidence = std::stof(valueImagesImagesItemFacesFacesItem["FaceConfidence"].asString());
			if(!valueImagesImagesItemFacesFacesItem["EmotionConfidence"].isNull())
				facesObject.emotionConfidence = std::stof(valueImagesImagesItemFacesFacesItem["EmotionConfidence"].asString());
			if(!valueImagesImagesItemFacesFacesItem["Attractive"].isNull())
				facesObject.attractive = std::stof(valueImagesImagesItemFacesFacesItem["Attractive"].asString());
			if(!valueImagesImagesItemFacesFacesItem["GroupId"].isNull())
				facesObject.groupId = valueImagesImagesItemFacesFacesItem["GroupId"].asString();
			auto faceAttributesNode = value["FaceAttributes"];
			if(!faceAttributesNode["GlassesConfidence"].isNull())
				facesObject.faceAttributes.glassesConfidence = std::stof(faceAttributesNode["GlassesConfidence"].asString());
			if(!faceAttributesNode["Glasses"].isNull())
				facesObject.faceAttributes.glasses = faceAttributesNode["Glasses"].asString();
			if(!faceAttributesNode["Mask"].isNull())
				facesObject.faceAttributes.mask = faceAttributesNode["Mask"].asString();
			if(!faceAttributesNode["BeardConfidence"].isNull())
				facesObject.faceAttributes.beardConfidence = std::stof(faceAttributesNode["BeardConfidence"].asString());
			if(!faceAttributesNode["MaskConfidence"].isNull())
				facesObject.faceAttributes.maskConfidence = std::stof(faceAttributesNode["MaskConfidence"].asString());
			if(!faceAttributesNode["Beard"].isNull())
				facesObject.faceAttributes.beard = faceAttributesNode["Beard"].asString();
			auto faceBoundaryNode = faceAttributesNode["FaceBoundary"];
			if(!faceBoundaryNode["Top"].isNull())
				facesObject.faceAttributes.faceBoundary.top = std::stoi(faceBoundaryNode["Top"].asString());
			if(!faceBoundaryNode["Width"].isNull())
				facesObject.faceAttributes.faceBoundary.width = std::stoi(faceBoundaryNode["Width"].asString());
			if(!faceBoundaryNode["Height"].isNull())
				facesObject.faceAttributes.faceBoundary.height = std::stoi(faceBoundaryNode["Height"].asString());
			if(!faceBoundaryNode["Left"].isNull())
				facesObject.faceAttributes.faceBoundary.left = std::stoi(faceBoundaryNode["Left"].asString());
			auto headPoseNode = faceAttributesNode["HeadPose"];
			if(!headPoseNode["Pitch"].isNull())
				facesObject.faceAttributes.headPose.pitch = std::stof(headPoseNode["Pitch"].asString());
			if(!headPoseNode["Roll"].isNull())
				facesObject.faceAttributes.headPose.roll = std::stof(headPoseNode["Roll"].asString());
			if(!headPoseNode["Yaw"].isNull())
				facesObject.faceAttributes.headPose.yaw = std::stof(headPoseNode["Yaw"].asString());
			auto emotionDetailsNode = value["EmotionDetails"];
			if(!emotionDetailsNode["HAPPY"].isNull())
				facesObject.emotionDetails.hAPPY = std::stof(emotionDetailsNode["HAPPY"].asString());
			if(!emotionDetailsNode["SURPRISED"].isNull())
				facesObject.emotionDetails.sURPRISED = std::stof(emotionDetailsNode["SURPRISED"].asString());
			if(!emotionDetailsNode["CALM"].isNull())
				facesObject.emotionDetails.cALM = std::stof(emotionDetailsNode["CALM"].asString());
			if(!emotionDetailsNode["DISGUSTED"].isNull())
				facesObject.emotionDetails.dISGUSTED = std::stof(emotionDetailsNode["DISGUSTED"].asString());
			if(!emotionDetailsNode["ANGRY"].isNull())
				facesObject.emotionDetails.aNGRY = std::stof(emotionDetailsNode["ANGRY"].asString());
			if(!emotionDetailsNode["SAD"].isNull())
				facesObject.emotionDetails.sAD = std::stof(emotionDetailsNode["SAD"].asString());
			if(!emotionDetailsNode["SCARED"].isNull())
				facesObject.emotionDetails.sCARED = std::stof(emotionDetailsNode["SCARED"].asString());
			imagesObject.faces.push_back(facesObject);
		}
		auto allCroppingSuggestionNode = valueImagesImagesItem["CroppingSuggestion"]["CroppingSuggestionItem"];
		for (auto valueImagesImagesItemCroppingSuggestionCroppingSuggestionItem : allCroppingSuggestionNode)
		{
			ImagesItem::CroppingSuggestionItem croppingSuggestionObject;
			if(!valueImagesImagesItemCroppingSuggestionCroppingSuggestionItem["Score"].isNull())
				croppingSuggestionObject.score = std::stof(valueImagesImagesItemCroppingSuggestionCroppingSuggestionItem["Score"].asString());
			if(!valueImagesImagesItemCroppingSuggestionCroppingSuggestionItem["AspectRatio"].isNull())
				croppingSuggestionObject.aspectRatio = valueImagesImagesItemCroppingSuggestionCroppingSuggestionItem["AspectRatio"].asString();
			auto croppingBoundaryNode = value["CroppingBoundary"];
			if(!croppingBoundaryNode["Top"].isNull())
				croppingSuggestionObject.croppingBoundary.top = std::stoi(croppingBoundaryNode["Top"].asString());
			if(!croppingBoundaryNode["Width"].isNull())
				croppingSuggestionObject.croppingBoundary.width = std::stoi(croppingBoundaryNode["Width"].asString());
			if(!croppingBoundaryNode["Height"].isNull())
				croppingSuggestionObject.croppingBoundary.height = std::stoi(croppingBoundaryNode["Height"].asString());
			if(!croppingBoundaryNode["Left"].isNull())
				croppingSuggestionObject.croppingBoundary.left = std::stoi(croppingBoundaryNode["Left"].asString());
			imagesObject.croppingSuggestion.push_back(croppingSuggestionObject);
		}
		auto addressNode = value["Address"];
		if(!addressNode["Township"].isNull())
			imagesObject.address.township = addressNode["Township"].asString();
		if(!addressNode["District"].isNull())
			imagesObject.address.district = addressNode["District"].asString();
		if(!addressNode["AddressLine"].isNull())
			imagesObject.address.addressLine = addressNode["AddressLine"].asString();
		if(!addressNode["Country"].isNull())
			imagesObject.address.country = addressNode["Country"].asString();
		if(!addressNode["City"].isNull())
			imagesObject.address.city = addressNode["City"].asString();
		if(!addressNode["Province"].isNull())
			imagesObject.address.province = addressNode["Province"].asString();
		auto imageQualityNode = value["ImageQuality"];
		if(!imageQualityNode["OverallScore"].isNull())
			imagesObject.imageQuality.overallScore = std::stof(imageQualityNode["OverallScore"].asString());
		if(!imageQualityNode["Color"].isNull())
			imagesObject.imageQuality.color = std::stof(imageQualityNode["Color"].asString());
		if(!imageQualityNode["ColorScore"].isNull())
			imagesObject.imageQuality.colorScore = std::stof(imageQualityNode["ColorScore"].asString());
		if(!imageQualityNode["ContrastScore"].isNull())
			imagesObject.imageQuality.contrastScore = std::stof(imageQualityNode["ContrastScore"].asString());
		if(!imageQualityNode["Contrast"].isNull())
			imagesObject.imageQuality.contrast = std::stof(imageQualityNode["Contrast"].asString());
		if(!imageQualityNode["ExposureScore"].isNull())
			imagesObject.imageQuality.exposureScore = std::stof(imageQualityNode["ExposureScore"].asString());
		if(!imageQualityNode["ClarityScore"].isNull())
			imagesObject.imageQuality.clarityScore = std::stof(imageQualityNode["ClarityScore"].asString());
		if(!imageQualityNode["Clarity"].isNull())
			imagesObject.imageQuality.clarity = std::stof(imageQualityNode["Clarity"].asString());
		if(!imageQualityNode["Exposure"].isNull())
			imagesObject.imageQuality.exposure = std::stof(imageQualityNode["Exposure"].asString());
		if(!imageQualityNode["CompositionScore"].isNull())
			imagesObject.imageQuality.compositionScore = std::stof(imageQualityNode["CompositionScore"].asString());
		images_.push_back(imagesObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();

}

std::vector<FindImagesResult::ImagesItem> FindImagesResult::getImages()const
{
	return images_;
}

std::string FindImagesResult::getNextMarker()const
{
	return nextMarker_;
}

std::string FindImagesResult::getSetId()const
{
	return setId_;
}

