﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class AWS_CHIMESDKMEDIAPIPELINES_API ListTagsForResourceRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ARN of the media pipeline associated with any tags. The ARN consists of
     * the pipeline's region, resource ID, and pipeline ID.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The ARN of the media pipeline associated with any tags. The ARN consists of
     * the pipeline's region, resource ID, and pipeline ID.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The ARN of the media pipeline associated with any tags. The ARN consists of
     * the pipeline's region, resource ID, and pipeline ID.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The ARN of the media pipeline associated with any tags. The ARN consists of
     * the pipeline's region, resource ID, and pipeline ID.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The ARN of the media pipeline associated with any tags. The ARN consists of
     * the pipeline's region, resource ID, and pipeline ID.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The ARN of the media pipeline associated with any tags. The ARN consists of
     * the pipeline's region, resource ID, and pipeline ID.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The ARN of the media pipeline associated with any tags. The ARN consists of
     * the pipeline's region, resource ID, and pipeline ID.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the media pipeline associated with any tags. The ARN consists of
     * the pipeline's region, resource ID, and pipeline ID.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
