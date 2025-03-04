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

#ifndef ALIBABACLOUD_IMM_IMMCLIENT_H_
#define ALIBABACLOUD_IMM_IMMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ImmExport.h"
#include "model/CompareImageFacesRequest.h"
#include "model/CompareImageFacesResult.h"
#include "model/ConvertOfficeFormatRequest.h"
#include "model/ConvertOfficeFormatResult.h"
#include "model/CreateGrabFrameTaskRequest.h"
#include "model/CreateGrabFrameTaskResult.h"
#include "model/CreateGroupFacesJobRequest.h"
#include "model/CreateGroupFacesJobResult.h"
#include "model/CreateImageProcessTaskRequest.h"
#include "model/CreateImageProcessTaskResult.h"
#include "model/CreateMediaComplexTaskRequest.h"
#include "model/CreateMediaComplexTaskResult.h"
#include "model/CreateMergeFaceGroupsJobRequest.h"
#include "model/CreateMergeFaceGroupsJobResult.h"
#include "model/CreateOfficeConversionTaskRequest.h"
#include "model/CreateOfficeConversionTaskResult.h"
#include "model/CreateSetRequest.h"
#include "model/CreateSetResult.h"
#include "model/CreateVideoAbstractTaskRequest.h"
#include "model/CreateVideoAbstractTaskResult.h"
#include "model/CreateVideoAnalyseTaskRequest.h"
#include "model/CreateVideoAnalyseTaskResult.h"
#include "model/CreateVideoCompressTaskRequest.h"
#include "model/CreateVideoCompressTaskResult.h"
#include "model/CreateVideoProduceTaskRequest.h"
#include "model/CreateVideoProduceTaskResult.h"
#include "model/DecodeBlindWatermarkRequest.h"
#include "model/DecodeBlindWatermarkResult.h"
#include "model/DeleteImageRequest.h"
#include "model/DeleteImageResult.h"
#include "model/DeleteImageJobRequest.h"
#include "model/DeleteImageJobResult.h"
#include "model/DeleteOfficeConversionTaskRequest.h"
#include "model/DeleteOfficeConversionTaskResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/DeleteSetRequest.h"
#include "model/DeleteSetResult.h"
#include "model/DeleteVideoRequest.h"
#include "model/DeleteVideoResult.h"
#include "model/DeleteVideoTaskRequest.h"
#include "model/DeleteVideoTaskResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DetectImageBodiesRequest.h"
#include "model/DetectImageBodiesResult.h"
#include "model/DetectImageFacesRequest.h"
#include "model/DetectImageFacesResult.h"
#include "model/DetectImageQRCodesRequest.h"
#include "model/DetectImageQRCodesResult.h"
#include "model/DetectImageTagsRequest.h"
#include "model/DetectImageTagsResult.h"
#include "model/DetectQRCodesRequest.h"
#include "model/DetectQRCodesResult.h"
#include "model/EncodeBlindWatermarkRequest.h"
#include "model/EncodeBlindWatermarkResult.h"
#include "model/FindImagesRequest.h"
#include "model/FindImagesResult.h"
#include "model/FindSimilarFacesRequest.h"
#include "model/FindSimilarFacesResult.h"
#include "model/GetContentKeyRequest.h"
#include "model/GetContentKeyResult.h"
#include "model/GetDRMLicenseRequest.h"
#include "model/GetDRMLicenseResult.h"
#include "model/GetImageRequest.h"
#include "model/GetImageResult.h"
#include "model/GetImageCroppingSuggestionsRequest.h"
#include "model/GetImageCroppingSuggestionsResult.h"
#include "model/GetImageQualityRequest.h"
#include "model/GetImageQualityResult.h"
#include "model/GetMediaMetaRequest.h"
#include "model/GetMediaMetaResult.h"
#include "model/GetOfficeConversionTaskRequest.h"
#include "model/GetOfficeConversionTaskResult.h"
#include "model/GetOfficeEditURLRequest.h"
#include "model/GetOfficeEditURLResult.h"
#include "model/GetOfficePreviewURLRequest.h"
#include "model/GetOfficePreviewURLResult.h"
#include "model/GetProjectRequest.h"
#include "model/GetProjectResult.h"
#include "model/GetSetRequest.h"
#include "model/GetSetResult.h"
#include "model/GetVideoRequest.h"
#include "model/GetVideoResult.h"
#include "model/GetVideoTaskRequest.h"
#include "model/GetVideoTaskResult.h"
#include "model/GetWebofficeURLRequest.h"
#include "model/GetWebofficeURLResult.h"
#include "model/IndexImageRequest.h"
#include "model/IndexImageResult.h"
#include "model/IndexVideoRequest.h"
#include "model/IndexVideoResult.h"
#include "model/ListFaceGroupsRequest.h"
#include "model/ListFaceGroupsResult.h"
#include "model/ListImagesRequest.h"
#include "model/ListImagesResult.h"
#include "model/ListOfficeConversionTaskRequest.h"
#include "model/ListOfficeConversionTaskResult.h"
#include "model/ListProjectAPIsRequest.h"
#include "model/ListProjectAPIsResult.h"
#include "model/ListProjectsRequest.h"
#include "model/ListProjectsResult.h"
#include "model/ListSetTagsRequest.h"
#include "model/ListSetTagsResult.h"
#include "model/ListSetsRequest.h"
#include "model/ListSetsResult.h"
#include "model/ListVideoAudiosRequest.h"
#include "model/ListVideoAudiosResult.h"
#include "model/ListVideoFramesRequest.h"
#include "model/ListVideoFramesResult.h"
#include "model/ListVideoTasksRequest.h"
#include "model/ListVideoTasksResult.h"
#include "model/ListVideosRequest.h"
#include "model/ListVideosResult.h"
#include "model/OpenImmServiceRequest.h"
#include "model/OpenImmServiceResult.h"
#include "model/PutProjectRequest.h"
#include "model/PutProjectResult.h"
#include "model/RefreshOfficeEditTokenRequest.h"
#include "model/RefreshOfficeEditTokenResult.h"
#include "model/RefreshOfficePreviewTokenRequest.h"
#include "model/RefreshOfficePreviewTokenResult.h"
#include "model/RefreshWebofficeTokenRequest.h"
#include "model/RefreshWebofficeTokenResult.h"
#include "model/UpdateFaceGroupRequest.h"
#include "model/UpdateFaceGroupResult.h"
#include "model/UpdateImageRequest.h"
#include "model/UpdateImageResult.h"
#include "model/UpdateProjectRequest.h"
#include "model/UpdateProjectResult.h"
#include "model/UpdateSetRequest.h"
#include "model/UpdateSetResult.h"


namespace AlibabaCloud
{
	namespace Imm
	{
		class ALIBABACLOUD_IMM_EXPORT ImmClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CompareImageFacesResult> CompareImageFacesOutcome;
			typedef std::future<CompareImageFacesOutcome> CompareImageFacesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CompareImageFacesRequest&, const CompareImageFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompareImageFacesAsyncHandler;
			typedef Outcome<Error, Model::ConvertOfficeFormatResult> ConvertOfficeFormatOutcome;
			typedef std::future<ConvertOfficeFormatOutcome> ConvertOfficeFormatOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ConvertOfficeFormatRequest&, const ConvertOfficeFormatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertOfficeFormatAsyncHandler;
			typedef Outcome<Error, Model::CreateGrabFrameTaskResult> CreateGrabFrameTaskOutcome;
			typedef std::future<CreateGrabFrameTaskOutcome> CreateGrabFrameTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateGrabFrameTaskRequest&, const CreateGrabFrameTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGrabFrameTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupFacesJobResult> CreateGroupFacesJobOutcome;
			typedef std::future<CreateGroupFacesJobOutcome> CreateGroupFacesJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateGroupFacesJobRequest&, const CreateGroupFacesJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupFacesJobAsyncHandler;
			typedef Outcome<Error, Model::CreateImageProcessTaskResult> CreateImageProcessTaskOutcome;
			typedef std::future<CreateImageProcessTaskOutcome> CreateImageProcessTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateImageProcessTaskRequest&, const CreateImageProcessTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageProcessTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateMediaComplexTaskResult> CreateMediaComplexTaskOutcome;
			typedef std::future<CreateMediaComplexTaskOutcome> CreateMediaComplexTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateMediaComplexTaskRequest&, const CreateMediaComplexTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaComplexTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateMergeFaceGroupsJobResult> CreateMergeFaceGroupsJobOutcome;
			typedef std::future<CreateMergeFaceGroupsJobOutcome> CreateMergeFaceGroupsJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateMergeFaceGroupsJobRequest&, const CreateMergeFaceGroupsJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMergeFaceGroupsJobAsyncHandler;
			typedef Outcome<Error, Model::CreateOfficeConversionTaskResult> CreateOfficeConversionTaskOutcome;
			typedef std::future<CreateOfficeConversionTaskOutcome> CreateOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateOfficeConversionTaskRequest&, const CreateOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateSetResult> CreateSetOutcome;
			typedef std::future<CreateSetOutcome> CreateSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateSetRequest&, const CreateSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSetAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoAbstractTaskResult> CreateVideoAbstractTaskOutcome;
			typedef std::future<CreateVideoAbstractTaskOutcome> CreateVideoAbstractTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateVideoAbstractTaskRequest&, const CreateVideoAbstractTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoAbstractTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoAnalyseTaskResult> CreateVideoAnalyseTaskOutcome;
			typedef std::future<CreateVideoAnalyseTaskOutcome> CreateVideoAnalyseTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateVideoAnalyseTaskRequest&, const CreateVideoAnalyseTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoAnalyseTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoCompressTaskResult> CreateVideoCompressTaskOutcome;
			typedef std::future<CreateVideoCompressTaskOutcome> CreateVideoCompressTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateVideoCompressTaskRequest&, const CreateVideoCompressTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoCompressTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoProduceTaskResult> CreateVideoProduceTaskOutcome;
			typedef std::future<CreateVideoProduceTaskOutcome> CreateVideoProduceTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::CreateVideoProduceTaskRequest&, const CreateVideoProduceTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoProduceTaskAsyncHandler;
			typedef Outcome<Error, Model::DecodeBlindWatermarkResult> DecodeBlindWatermarkOutcome;
			typedef std::future<DecodeBlindWatermarkOutcome> DecodeBlindWatermarkOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DecodeBlindWatermarkRequest&, const DecodeBlindWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecodeBlindWatermarkAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageResult> DeleteImageOutcome;
			typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteImageRequest&, const DeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageJobResult> DeleteImageJobOutcome;
			typedef std::future<DeleteImageJobOutcome> DeleteImageJobOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteImageJobRequest&, const DeleteImageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteOfficeConversionTaskResult> DeleteOfficeConversionTaskOutcome;
			typedef std::future<DeleteOfficeConversionTaskOutcome> DeleteOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteOfficeConversionTaskRequest&, const DeleteOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteSetResult> DeleteSetOutcome;
			typedef std::future<DeleteSetOutcome> DeleteSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteSetRequest&, const DeleteSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoResult> DeleteVideoOutcome;
			typedef std::future<DeleteVideoOutcome> DeleteVideoOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteVideoRequest&, const DeleteVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoTaskResult> DeleteVideoTaskOutcome;
			typedef std::future<DeleteVideoTaskOutcome> DeleteVideoTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DeleteVideoTaskRequest&, const DeleteVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DetectImageBodiesResult> DetectImageBodiesOutcome;
			typedef std::future<DetectImageBodiesOutcome> DetectImageBodiesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageBodiesRequest&, const DetectImageBodiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageBodiesAsyncHandler;
			typedef Outcome<Error, Model::DetectImageFacesResult> DetectImageFacesOutcome;
			typedef std::future<DetectImageFacesOutcome> DetectImageFacesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageFacesRequest&, const DetectImageFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageFacesAsyncHandler;
			typedef Outcome<Error, Model::DetectImageQRCodesResult> DetectImageQRCodesOutcome;
			typedef std::future<DetectImageQRCodesOutcome> DetectImageQRCodesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageQRCodesRequest&, const DetectImageQRCodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageQRCodesAsyncHandler;
			typedef Outcome<Error, Model::DetectImageTagsResult> DetectImageTagsOutcome;
			typedef std::future<DetectImageTagsOutcome> DetectImageTagsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectImageTagsRequest&, const DetectImageTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectImageTagsAsyncHandler;
			typedef Outcome<Error, Model::DetectQRCodesResult> DetectQRCodesOutcome;
			typedef std::future<DetectQRCodesOutcome> DetectQRCodesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::DetectQRCodesRequest&, const DetectQRCodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectQRCodesAsyncHandler;
			typedef Outcome<Error, Model::EncodeBlindWatermarkResult> EncodeBlindWatermarkOutcome;
			typedef std::future<EncodeBlindWatermarkOutcome> EncodeBlindWatermarkOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::EncodeBlindWatermarkRequest&, const EncodeBlindWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EncodeBlindWatermarkAsyncHandler;
			typedef Outcome<Error, Model::FindImagesResult> FindImagesOutcome;
			typedef std::future<FindImagesOutcome> FindImagesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::FindImagesRequest&, const FindImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindImagesAsyncHandler;
			typedef Outcome<Error, Model::FindSimilarFacesResult> FindSimilarFacesOutcome;
			typedef std::future<FindSimilarFacesOutcome> FindSimilarFacesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::FindSimilarFacesRequest&, const FindSimilarFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindSimilarFacesAsyncHandler;
			typedef Outcome<Error, Model::GetContentKeyResult> GetContentKeyOutcome;
			typedef std::future<GetContentKeyOutcome> GetContentKeyOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetContentKeyRequest&, const GetContentKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetContentKeyAsyncHandler;
			typedef Outcome<Error, Model::GetDRMLicenseResult> GetDRMLicenseOutcome;
			typedef std::future<GetDRMLicenseOutcome> GetDRMLicenseOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetDRMLicenseRequest&, const GetDRMLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDRMLicenseAsyncHandler;
			typedef Outcome<Error, Model::GetImageResult> GetImageOutcome;
			typedef std::future<GetImageOutcome> GetImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetImageRequest&, const GetImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageAsyncHandler;
			typedef Outcome<Error, Model::GetImageCroppingSuggestionsResult> GetImageCroppingSuggestionsOutcome;
			typedef std::future<GetImageCroppingSuggestionsOutcome> GetImageCroppingSuggestionsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetImageCroppingSuggestionsRequest&, const GetImageCroppingSuggestionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageCroppingSuggestionsAsyncHandler;
			typedef Outcome<Error, Model::GetImageQualityResult> GetImageQualityOutcome;
			typedef std::future<GetImageQualityOutcome> GetImageQualityOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetImageQualityRequest&, const GetImageQualityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageQualityAsyncHandler;
			typedef Outcome<Error, Model::GetMediaMetaResult> GetMediaMetaOutcome;
			typedef std::future<GetMediaMetaOutcome> GetMediaMetaOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetMediaMetaRequest&, const GetMediaMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMediaMetaAsyncHandler;
			typedef Outcome<Error, Model::GetOfficeConversionTaskResult> GetOfficeConversionTaskOutcome;
			typedef std::future<GetOfficeConversionTaskOutcome> GetOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetOfficeConversionTaskRequest&, const GetOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::GetOfficeEditURLResult> GetOfficeEditURLOutcome;
			typedef std::future<GetOfficeEditURLOutcome> GetOfficeEditURLOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetOfficeEditURLRequest&, const GetOfficeEditURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOfficeEditURLAsyncHandler;
			typedef Outcome<Error, Model::GetOfficePreviewURLResult> GetOfficePreviewURLOutcome;
			typedef std::future<GetOfficePreviewURLOutcome> GetOfficePreviewURLOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetOfficePreviewURLRequest&, const GetOfficePreviewURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOfficePreviewURLAsyncHandler;
			typedef Outcome<Error, Model::GetProjectResult> GetProjectOutcome;
			typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetProjectRequest&, const GetProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectAsyncHandler;
			typedef Outcome<Error, Model::GetSetResult> GetSetOutcome;
			typedef std::future<GetSetOutcome> GetSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetSetRequest&, const GetSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSetAsyncHandler;
			typedef Outcome<Error, Model::GetVideoResult> GetVideoOutcome;
			typedef std::future<GetVideoOutcome> GetVideoOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetVideoRequest&, const GetVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoAsyncHandler;
			typedef Outcome<Error, Model::GetVideoTaskResult> GetVideoTaskOutcome;
			typedef std::future<GetVideoTaskOutcome> GetVideoTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetVideoTaskRequest&, const GetVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::GetWebofficeURLResult> GetWebofficeURLOutcome;
			typedef std::future<GetWebofficeURLOutcome> GetWebofficeURLOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::GetWebofficeURLRequest&, const GetWebofficeURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWebofficeURLAsyncHandler;
			typedef Outcome<Error, Model::IndexImageResult> IndexImageOutcome;
			typedef std::future<IndexImageOutcome> IndexImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::IndexImageRequest&, const IndexImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IndexImageAsyncHandler;
			typedef Outcome<Error, Model::IndexVideoResult> IndexVideoOutcome;
			typedef std::future<IndexVideoOutcome> IndexVideoOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::IndexVideoRequest&, const IndexVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IndexVideoAsyncHandler;
			typedef Outcome<Error, Model::ListFaceGroupsResult> ListFaceGroupsOutcome;
			typedef std::future<ListFaceGroupsOutcome> ListFaceGroupsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListFaceGroupsRequest&, const ListFaceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFaceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListImagesResult> ListImagesOutcome;
			typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListImagesRequest&, const ListImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImagesAsyncHandler;
			typedef Outcome<Error, Model::ListOfficeConversionTaskResult> ListOfficeConversionTaskOutcome;
			typedef std::future<ListOfficeConversionTaskOutcome> ListOfficeConversionTaskOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListOfficeConversionTaskRequest&, const ListOfficeConversionTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOfficeConversionTaskAsyncHandler;
			typedef Outcome<Error, Model::ListProjectAPIsResult> ListProjectAPIsOutcome;
			typedef std::future<ListProjectAPIsOutcome> ListProjectAPIsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListProjectAPIsRequest&, const ListProjectAPIsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectAPIsAsyncHandler;
			typedef Outcome<Error, Model::ListProjectsResult> ListProjectsOutcome;
			typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListProjectsRequest&, const ListProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;
			typedef Outcome<Error, Model::ListSetTagsResult> ListSetTagsOutcome;
			typedef std::future<ListSetTagsOutcome> ListSetTagsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListSetTagsRequest&, const ListSetTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSetTagsAsyncHandler;
			typedef Outcome<Error, Model::ListSetsResult> ListSetsOutcome;
			typedef std::future<ListSetsOutcome> ListSetsOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListSetsRequest&, const ListSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSetsAsyncHandler;
			typedef Outcome<Error, Model::ListVideoAudiosResult> ListVideoAudiosOutcome;
			typedef std::future<ListVideoAudiosOutcome> ListVideoAudiosOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideoAudiosRequest&, const ListVideoAudiosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideoAudiosAsyncHandler;
			typedef Outcome<Error, Model::ListVideoFramesResult> ListVideoFramesOutcome;
			typedef std::future<ListVideoFramesOutcome> ListVideoFramesOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideoFramesRequest&, const ListVideoFramesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideoFramesAsyncHandler;
			typedef Outcome<Error, Model::ListVideoTasksResult> ListVideoTasksOutcome;
			typedef std::future<ListVideoTasksOutcome> ListVideoTasksOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideoTasksRequest&, const ListVideoTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideoTasksAsyncHandler;
			typedef Outcome<Error, Model::ListVideosResult> ListVideosOutcome;
			typedef std::future<ListVideosOutcome> ListVideosOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::ListVideosRequest&, const ListVideosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVideosAsyncHandler;
			typedef Outcome<Error, Model::OpenImmServiceResult> OpenImmServiceOutcome;
			typedef std::future<OpenImmServiceOutcome> OpenImmServiceOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::OpenImmServiceRequest&, const OpenImmServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenImmServiceAsyncHandler;
			typedef Outcome<Error, Model::PutProjectResult> PutProjectOutcome;
			typedef std::future<PutProjectOutcome> PutProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::PutProjectRequest&, const PutProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutProjectAsyncHandler;
			typedef Outcome<Error, Model::RefreshOfficeEditTokenResult> RefreshOfficeEditTokenOutcome;
			typedef std::future<RefreshOfficeEditTokenOutcome> RefreshOfficeEditTokenOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::RefreshOfficeEditTokenRequest&, const RefreshOfficeEditTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshOfficeEditTokenAsyncHandler;
			typedef Outcome<Error, Model::RefreshOfficePreviewTokenResult> RefreshOfficePreviewTokenOutcome;
			typedef std::future<RefreshOfficePreviewTokenOutcome> RefreshOfficePreviewTokenOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::RefreshOfficePreviewTokenRequest&, const RefreshOfficePreviewTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshOfficePreviewTokenAsyncHandler;
			typedef Outcome<Error, Model::RefreshWebofficeTokenResult> RefreshWebofficeTokenOutcome;
			typedef std::future<RefreshWebofficeTokenOutcome> RefreshWebofficeTokenOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::RefreshWebofficeTokenRequest&, const RefreshWebofficeTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshWebofficeTokenAsyncHandler;
			typedef Outcome<Error, Model::UpdateFaceGroupResult> UpdateFaceGroupOutcome;
			typedef std::future<UpdateFaceGroupOutcome> UpdateFaceGroupOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateFaceGroupRequest&, const UpdateFaceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFaceGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateImageResult> UpdateImageOutcome;
			typedef std::future<UpdateImageOutcome> UpdateImageOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateImageRequest&, const UpdateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectResult> UpdateProjectOutcome;
			typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateProjectRequest&, const UpdateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;
			typedef Outcome<Error, Model::UpdateSetResult> UpdateSetOutcome;
			typedef std::future<UpdateSetOutcome> UpdateSetOutcomeCallable;
			typedef std::function<void(const ImmClient*, const Model::UpdateSetRequest&, const UpdateSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSetAsyncHandler;

			ImmClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ImmClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ImmClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ImmClient();
			CompareImageFacesOutcome compareImageFaces(const Model::CompareImageFacesRequest &request)const;
			void compareImageFacesAsync(const Model::CompareImageFacesRequest& request, const CompareImageFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompareImageFacesOutcomeCallable compareImageFacesCallable(const Model::CompareImageFacesRequest& request) const;
			ConvertOfficeFormatOutcome convertOfficeFormat(const Model::ConvertOfficeFormatRequest &request)const;
			void convertOfficeFormatAsync(const Model::ConvertOfficeFormatRequest& request, const ConvertOfficeFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertOfficeFormatOutcomeCallable convertOfficeFormatCallable(const Model::ConvertOfficeFormatRequest& request) const;
			CreateGrabFrameTaskOutcome createGrabFrameTask(const Model::CreateGrabFrameTaskRequest &request)const;
			void createGrabFrameTaskAsync(const Model::CreateGrabFrameTaskRequest& request, const CreateGrabFrameTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGrabFrameTaskOutcomeCallable createGrabFrameTaskCallable(const Model::CreateGrabFrameTaskRequest& request) const;
			CreateGroupFacesJobOutcome createGroupFacesJob(const Model::CreateGroupFacesJobRequest &request)const;
			void createGroupFacesJobAsync(const Model::CreateGroupFacesJobRequest& request, const CreateGroupFacesJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupFacesJobOutcomeCallable createGroupFacesJobCallable(const Model::CreateGroupFacesJobRequest& request) const;
			CreateImageProcessTaskOutcome createImageProcessTask(const Model::CreateImageProcessTaskRequest &request)const;
			void createImageProcessTaskAsync(const Model::CreateImageProcessTaskRequest& request, const CreateImageProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateImageProcessTaskOutcomeCallable createImageProcessTaskCallable(const Model::CreateImageProcessTaskRequest& request) const;
			CreateMediaComplexTaskOutcome createMediaComplexTask(const Model::CreateMediaComplexTaskRequest &request)const;
			void createMediaComplexTaskAsync(const Model::CreateMediaComplexTaskRequest& request, const CreateMediaComplexTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMediaComplexTaskOutcomeCallable createMediaComplexTaskCallable(const Model::CreateMediaComplexTaskRequest& request) const;
			CreateMergeFaceGroupsJobOutcome createMergeFaceGroupsJob(const Model::CreateMergeFaceGroupsJobRequest &request)const;
			void createMergeFaceGroupsJobAsync(const Model::CreateMergeFaceGroupsJobRequest& request, const CreateMergeFaceGroupsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMergeFaceGroupsJobOutcomeCallable createMergeFaceGroupsJobCallable(const Model::CreateMergeFaceGroupsJobRequest& request) const;
			CreateOfficeConversionTaskOutcome createOfficeConversionTask(const Model::CreateOfficeConversionTaskRequest &request)const;
			void createOfficeConversionTaskAsync(const Model::CreateOfficeConversionTaskRequest& request, const CreateOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOfficeConversionTaskOutcomeCallable createOfficeConversionTaskCallable(const Model::CreateOfficeConversionTaskRequest& request) const;
			CreateSetOutcome createSet(const Model::CreateSetRequest &request)const;
			void createSetAsync(const Model::CreateSetRequest& request, const CreateSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSetOutcomeCallable createSetCallable(const Model::CreateSetRequest& request) const;
			CreateVideoAbstractTaskOutcome createVideoAbstractTask(const Model::CreateVideoAbstractTaskRequest &request)const;
			void createVideoAbstractTaskAsync(const Model::CreateVideoAbstractTaskRequest& request, const CreateVideoAbstractTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoAbstractTaskOutcomeCallable createVideoAbstractTaskCallable(const Model::CreateVideoAbstractTaskRequest& request) const;
			CreateVideoAnalyseTaskOutcome createVideoAnalyseTask(const Model::CreateVideoAnalyseTaskRequest &request)const;
			void createVideoAnalyseTaskAsync(const Model::CreateVideoAnalyseTaskRequest& request, const CreateVideoAnalyseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoAnalyseTaskOutcomeCallable createVideoAnalyseTaskCallable(const Model::CreateVideoAnalyseTaskRequest& request) const;
			CreateVideoCompressTaskOutcome createVideoCompressTask(const Model::CreateVideoCompressTaskRequest &request)const;
			void createVideoCompressTaskAsync(const Model::CreateVideoCompressTaskRequest& request, const CreateVideoCompressTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoCompressTaskOutcomeCallable createVideoCompressTaskCallable(const Model::CreateVideoCompressTaskRequest& request) const;
			CreateVideoProduceTaskOutcome createVideoProduceTask(const Model::CreateVideoProduceTaskRequest &request)const;
			void createVideoProduceTaskAsync(const Model::CreateVideoProduceTaskRequest& request, const CreateVideoProduceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoProduceTaskOutcomeCallable createVideoProduceTaskCallable(const Model::CreateVideoProduceTaskRequest& request) const;
			DecodeBlindWatermarkOutcome decodeBlindWatermark(const Model::DecodeBlindWatermarkRequest &request)const;
			void decodeBlindWatermarkAsync(const Model::DecodeBlindWatermarkRequest& request, const DecodeBlindWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecodeBlindWatermarkOutcomeCallable decodeBlindWatermarkCallable(const Model::DecodeBlindWatermarkRequest& request) const;
			DeleteImageOutcome deleteImage(const Model::DeleteImageRequest &request)const;
			void deleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageOutcomeCallable deleteImageCallable(const Model::DeleteImageRequest& request) const;
			DeleteImageJobOutcome deleteImageJob(const Model::DeleteImageJobRequest &request)const;
			void deleteImageJobAsync(const Model::DeleteImageJobRequest& request, const DeleteImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageJobOutcomeCallable deleteImageJobCallable(const Model::DeleteImageJobRequest& request) const;
			DeleteOfficeConversionTaskOutcome deleteOfficeConversionTask(const Model::DeleteOfficeConversionTaskRequest &request)const;
			void deleteOfficeConversionTaskAsync(const Model::DeleteOfficeConversionTaskRequest& request, const DeleteOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOfficeConversionTaskOutcomeCallable deleteOfficeConversionTaskCallable(const Model::DeleteOfficeConversionTaskRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			DeleteSetOutcome deleteSet(const Model::DeleteSetRequest &request)const;
			void deleteSetAsync(const Model::DeleteSetRequest& request, const DeleteSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSetOutcomeCallable deleteSetCallable(const Model::DeleteSetRequest& request) const;
			DeleteVideoOutcome deleteVideo(const Model::DeleteVideoRequest &request)const;
			void deleteVideoAsync(const Model::DeleteVideoRequest& request, const DeleteVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoOutcomeCallable deleteVideoCallable(const Model::DeleteVideoRequest& request) const;
			DeleteVideoTaskOutcome deleteVideoTask(const Model::DeleteVideoTaskRequest &request)const;
			void deleteVideoTaskAsync(const Model::DeleteVideoTaskRequest& request, const DeleteVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoTaskOutcomeCallable deleteVideoTaskCallable(const Model::DeleteVideoTaskRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DetectImageBodiesOutcome detectImageBodies(const Model::DetectImageBodiesRequest &request)const;
			void detectImageBodiesAsync(const Model::DetectImageBodiesRequest& request, const DetectImageBodiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageBodiesOutcomeCallable detectImageBodiesCallable(const Model::DetectImageBodiesRequest& request) const;
			DetectImageFacesOutcome detectImageFaces(const Model::DetectImageFacesRequest &request)const;
			void detectImageFacesAsync(const Model::DetectImageFacesRequest& request, const DetectImageFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageFacesOutcomeCallable detectImageFacesCallable(const Model::DetectImageFacesRequest& request) const;
			DetectImageQRCodesOutcome detectImageQRCodes(const Model::DetectImageQRCodesRequest &request)const;
			void detectImageQRCodesAsync(const Model::DetectImageQRCodesRequest& request, const DetectImageQRCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageQRCodesOutcomeCallable detectImageQRCodesCallable(const Model::DetectImageQRCodesRequest& request) const;
			DetectImageTagsOutcome detectImageTags(const Model::DetectImageTagsRequest &request)const;
			void detectImageTagsAsync(const Model::DetectImageTagsRequest& request, const DetectImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectImageTagsOutcomeCallable detectImageTagsCallable(const Model::DetectImageTagsRequest& request) const;
			DetectQRCodesOutcome detectQRCodes(const Model::DetectQRCodesRequest &request)const;
			void detectQRCodesAsync(const Model::DetectQRCodesRequest& request, const DetectQRCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectQRCodesOutcomeCallable detectQRCodesCallable(const Model::DetectQRCodesRequest& request) const;
			EncodeBlindWatermarkOutcome encodeBlindWatermark(const Model::EncodeBlindWatermarkRequest &request)const;
			void encodeBlindWatermarkAsync(const Model::EncodeBlindWatermarkRequest& request, const EncodeBlindWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EncodeBlindWatermarkOutcomeCallable encodeBlindWatermarkCallable(const Model::EncodeBlindWatermarkRequest& request) const;
			FindImagesOutcome findImages(const Model::FindImagesRequest &request)const;
			void findImagesAsync(const Model::FindImagesRequest& request, const FindImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindImagesOutcomeCallable findImagesCallable(const Model::FindImagesRequest& request) const;
			FindSimilarFacesOutcome findSimilarFaces(const Model::FindSimilarFacesRequest &request)const;
			void findSimilarFacesAsync(const Model::FindSimilarFacesRequest& request, const FindSimilarFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindSimilarFacesOutcomeCallable findSimilarFacesCallable(const Model::FindSimilarFacesRequest& request) const;
			GetContentKeyOutcome getContentKey(const Model::GetContentKeyRequest &request)const;
			void getContentKeyAsync(const Model::GetContentKeyRequest& request, const GetContentKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetContentKeyOutcomeCallable getContentKeyCallable(const Model::GetContentKeyRequest& request) const;
			GetDRMLicenseOutcome getDRMLicense(const Model::GetDRMLicenseRequest &request)const;
			void getDRMLicenseAsync(const Model::GetDRMLicenseRequest& request, const GetDRMLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDRMLicenseOutcomeCallable getDRMLicenseCallable(const Model::GetDRMLicenseRequest& request) const;
			GetImageOutcome getImage(const Model::GetImageRequest &request)const;
			void getImageAsync(const Model::GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageOutcomeCallable getImageCallable(const Model::GetImageRequest& request) const;
			GetImageCroppingSuggestionsOutcome getImageCroppingSuggestions(const Model::GetImageCroppingSuggestionsRequest &request)const;
			void getImageCroppingSuggestionsAsync(const Model::GetImageCroppingSuggestionsRequest& request, const GetImageCroppingSuggestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageCroppingSuggestionsOutcomeCallable getImageCroppingSuggestionsCallable(const Model::GetImageCroppingSuggestionsRequest& request) const;
			GetImageQualityOutcome getImageQuality(const Model::GetImageQualityRequest &request)const;
			void getImageQualityAsync(const Model::GetImageQualityRequest& request, const GetImageQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageQualityOutcomeCallable getImageQualityCallable(const Model::GetImageQualityRequest& request) const;
			GetMediaMetaOutcome getMediaMeta(const Model::GetMediaMetaRequest &request)const;
			void getMediaMetaAsync(const Model::GetMediaMetaRequest& request, const GetMediaMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMediaMetaOutcomeCallable getMediaMetaCallable(const Model::GetMediaMetaRequest& request) const;
			GetOfficeConversionTaskOutcome getOfficeConversionTask(const Model::GetOfficeConversionTaskRequest &request)const;
			void getOfficeConversionTaskAsync(const Model::GetOfficeConversionTaskRequest& request, const GetOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOfficeConversionTaskOutcomeCallable getOfficeConversionTaskCallable(const Model::GetOfficeConversionTaskRequest& request) const;
			GetOfficeEditURLOutcome getOfficeEditURL(const Model::GetOfficeEditURLRequest &request)const;
			void getOfficeEditURLAsync(const Model::GetOfficeEditURLRequest& request, const GetOfficeEditURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOfficeEditURLOutcomeCallable getOfficeEditURLCallable(const Model::GetOfficeEditURLRequest& request) const;
			GetOfficePreviewURLOutcome getOfficePreviewURL(const Model::GetOfficePreviewURLRequest &request)const;
			void getOfficePreviewURLAsync(const Model::GetOfficePreviewURLRequest& request, const GetOfficePreviewURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOfficePreviewURLOutcomeCallable getOfficePreviewURLCallable(const Model::GetOfficePreviewURLRequest& request) const;
			GetProjectOutcome getProject(const Model::GetProjectRequest &request)const;
			void getProjectAsync(const Model::GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectOutcomeCallable getProjectCallable(const Model::GetProjectRequest& request) const;
			GetSetOutcome getSet(const Model::GetSetRequest &request)const;
			void getSetAsync(const Model::GetSetRequest& request, const GetSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSetOutcomeCallable getSetCallable(const Model::GetSetRequest& request) const;
			GetVideoOutcome getVideo(const Model::GetVideoRequest &request)const;
			void getVideoAsync(const Model::GetVideoRequest& request, const GetVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoOutcomeCallable getVideoCallable(const Model::GetVideoRequest& request) const;
			GetVideoTaskOutcome getVideoTask(const Model::GetVideoTaskRequest &request)const;
			void getVideoTaskAsync(const Model::GetVideoTaskRequest& request, const GetVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoTaskOutcomeCallable getVideoTaskCallable(const Model::GetVideoTaskRequest& request) const;
			GetWebofficeURLOutcome getWebofficeURL(const Model::GetWebofficeURLRequest &request)const;
			void getWebofficeURLAsync(const Model::GetWebofficeURLRequest& request, const GetWebofficeURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWebofficeURLOutcomeCallable getWebofficeURLCallable(const Model::GetWebofficeURLRequest& request) const;
			IndexImageOutcome indexImage(const Model::IndexImageRequest &request)const;
			void indexImageAsync(const Model::IndexImageRequest& request, const IndexImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IndexImageOutcomeCallable indexImageCallable(const Model::IndexImageRequest& request) const;
			IndexVideoOutcome indexVideo(const Model::IndexVideoRequest &request)const;
			void indexVideoAsync(const Model::IndexVideoRequest& request, const IndexVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IndexVideoOutcomeCallable indexVideoCallable(const Model::IndexVideoRequest& request) const;
			ListFaceGroupsOutcome listFaceGroups(const Model::ListFaceGroupsRequest &request)const;
			void listFaceGroupsAsync(const Model::ListFaceGroupsRequest& request, const ListFaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFaceGroupsOutcomeCallable listFaceGroupsCallable(const Model::ListFaceGroupsRequest& request) const;
			ListImagesOutcome listImages(const Model::ListImagesRequest &request)const;
			void listImagesAsync(const Model::ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImagesOutcomeCallable listImagesCallable(const Model::ListImagesRequest& request) const;
			ListOfficeConversionTaskOutcome listOfficeConversionTask(const Model::ListOfficeConversionTaskRequest &request)const;
			void listOfficeConversionTaskAsync(const Model::ListOfficeConversionTaskRequest& request, const ListOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOfficeConversionTaskOutcomeCallable listOfficeConversionTaskCallable(const Model::ListOfficeConversionTaskRequest& request) const;
			ListProjectAPIsOutcome listProjectAPIs(const Model::ListProjectAPIsRequest &request)const;
			void listProjectAPIsAsync(const Model::ListProjectAPIsRequest& request, const ListProjectAPIsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectAPIsOutcomeCallable listProjectAPIsCallable(const Model::ListProjectAPIsRequest& request) const;
			ListProjectsOutcome listProjects(const Model::ListProjectsRequest &request)const;
			void listProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectsOutcomeCallable listProjectsCallable(const Model::ListProjectsRequest& request) const;
			ListSetTagsOutcome listSetTags(const Model::ListSetTagsRequest &request)const;
			void listSetTagsAsync(const Model::ListSetTagsRequest& request, const ListSetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSetTagsOutcomeCallable listSetTagsCallable(const Model::ListSetTagsRequest& request) const;
			ListSetsOutcome listSets(const Model::ListSetsRequest &request)const;
			void listSetsAsync(const Model::ListSetsRequest& request, const ListSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSetsOutcomeCallable listSetsCallable(const Model::ListSetsRequest& request) const;
			ListVideoAudiosOutcome listVideoAudios(const Model::ListVideoAudiosRequest &request)const;
			void listVideoAudiosAsync(const Model::ListVideoAudiosRequest& request, const ListVideoAudiosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideoAudiosOutcomeCallable listVideoAudiosCallable(const Model::ListVideoAudiosRequest& request) const;
			ListVideoFramesOutcome listVideoFrames(const Model::ListVideoFramesRequest &request)const;
			void listVideoFramesAsync(const Model::ListVideoFramesRequest& request, const ListVideoFramesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideoFramesOutcomeCallable listVideoFramesCallable(const Model::ListVideoFramesRequest& request) const;
			ListVideoTasksOutcome listVideoTasks(const Model::ListVideoTasksRequest &request)const;
			void listVideoTasksAsync(const Model::ListVideoTasksRequest& request, const ListVideoTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideoTasksOutcomeCallable listVideoTasksCallable(const Model::ListVideoTasksRequest& request) const;
			ListVideosOutcome listVideos(const Model::ListVideosRequest &request)const;
			void listVideosAsync(const Model::ListVideosRequest& request, const ListVideosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVideosOutcomeCallable listVideosCallable(const Model::ListVideosRequest& request) const;
			OpenImmServiceOutcome openImmService(const Model::OpenImmServiceRequest &request)const;
			void openImmServiceAsync(const Model::OpenImmServiceRequest& request, const OpenImmServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenImmServiceOutcomeCallable openImmServiceCallable(const Model::OpenImmServiceRequest& request) const;
			PutProjectOutcome putProject(const Model::PutProjectRequest &request)const;
			void putProjectAsync(const Model::PutProjectRequest& request, const PutProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutProjectOutcomeCallable putProjectCallable(const Model::PutProjectRequest& request) const;
			RefreshOfficeEditTokenOutcome refreshOfficeEditToken(const Model::RefreshOfficeEditTokenRequest &request)const;
			void refreshOfficeEditTokenAsync(const Model::RefreshOfficeEditTokenRequest& request, const RefreshOfficeEditTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshOfficeEditTokenOutcomeCallable refreshOfficeEditTokenCallable(const Model::RefreshOfficeEditTokenRequest& request) const;
			RefreshOfficePreviewTokenOutcome refreshOfficePreviewToken(const Model::RefreshOfficePreviewTokenRequest &request)const;
			void refreshOfficePreviewTokenAsync(const Model::RefreshOfficePreviewTokenRequest& request, const RefreshOfficePreviewTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshOfficePreviewTokenOutcomeCallable refreshOfficePreviewTokenCallable(const Model::RefreshOfficePreviewTokenRequest& request) const;
			RefreshWebofficeTokenOutcome refreshWebofficeToken(const Model::RefreshWebofficeTokenRequest &request)const;
			void refreshWebofficeTokenAsync(const Model::RefreshWebofficeTokenRequest& request, const RefreshWebofficeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshWebofficeTokenOutcomeCallable refreshWebofficeTokenCallable(const Model::RefreshWebofficeTokenRequest& request) const;
			UpdateFaceGroupOutcome updateFaceGroup(const Model::UpdateFaceGroupRequest &request)const;
			void updateFaceGroupAsync(const Model::UpdateFaceGroupRequest& request, const UpdateFaceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFaceGroupOutcomeCallable updateFaceGroupCallable(const Model::UpdateFaceGroupRequest& request) const;
			UpdateImageOutcome updateImage(const Model::UpdateImageRequest &request)const;
			void updateImageAsync(const Model::UpdateImageRequest& request, const UpdateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateImageOutcomeCallable updateImageCallable(const Model::UpdateImageRequest& request) const;
			UpdateProjectOutcome updateProject(const Model::UpdateProjectRequest &request)const;
			void updateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectOutcomeCallable updateProjectCallable(const Model::UpdateProjectRequest& request) const;
			UpdateSetOutcome updateSet(const Model::UpdateSetRequest &request)const;
			void updateSetAsync(const Model::UpdateSetRequest& request, const UpdateSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSetOutcomeCallable updateSetCallable(const Model::UpdateSetRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IMM_IMMCLIENT_H_
