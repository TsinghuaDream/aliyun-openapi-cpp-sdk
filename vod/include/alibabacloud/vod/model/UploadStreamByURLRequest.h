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

#ifndef ALIBABACLOUD_VOD_MODEL_UPLOADSTREAMBYURLREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPLOADSTREAMBYURLREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT UploadStreamByURLRequest : public RpcServiceRequest {
public:
	UploadStreamByURLRequest();
	~UploadStreamByURLRequest();
	std::string getFileExtension() const;
	void setFileExtension(const std::string &fileExtension);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getHDRType() const;
	void setHDRType(const std::string &hDRType);
	std::string getDefinition() const;
	void setDefinition(const std::string &definition);
	std::string getStreamURL() const;
	void setStreamURL(const std::string &streamURL);
	std::string getMediaId() const;
	void setMediaId(const std::string &mediaId);
	std::string getUploadMetadata() const;
	void setUploadMetadata(const std::string &uploadMetadata);

private:
	std::string fileExtension_;
	std::string userData_;
	std::string hDRType_;
	std::string definition_;
	std::string streamURL_;
	std::string mediaId_;
	std::string uploadMetadata_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_UPLOADSTREAMBYURLREQUEST_H_
