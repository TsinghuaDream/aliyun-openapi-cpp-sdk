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

#ifndef ALIBABACLOUD_OCR_MODEL_RECOGNIZEVIDEOCHARACTERRESULT_H_
#define ALIBABACLOUD_OCR_MODEL_RECOGNIZEVIDEOCHARACTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ocr/OcrExport.h>

namespace AlibabaCloud
{
	namespace Ocr
	{
		namespace Model
		{
			class ALIBABACLOUD_OCR_EXPORT RecognizeVideoCharacterResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Frame
					{
						struct Element
						{
							struct TextRectangle
							{
								long left;
								long angle;
								long top;
								long height;
								long width;
							};
							std::vector<Element::TextRectangle> textRectangles;
							float score;
							std::string text;
						};
						std::vector<Frame::Element> elements;
						long timestamp;
					};
					std::vector<Frame> frames;
					long height;
					long width;
					std::string inputFile;
				};


				RecognizeVideoCharacterResult();
				explicit RecognizeVideoCharacterResult(const std::string &payload);
				~RecognizeVideoCharacterResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCR_MODEL_RECOGNIZEVIDEOCHARACTERRESULT_H_