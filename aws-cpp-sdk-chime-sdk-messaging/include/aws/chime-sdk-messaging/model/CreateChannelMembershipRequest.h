﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipType.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class AWS_CHIMESDKMESSAGING_API CreateChannelMembershipRequest : public ChimeSDKMessagingRequest
  {
  public:
    CreateChannelMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannelMembership"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline CreateChannelMembershipRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline CreateChannelMembershipRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline CreateChannelMembershipRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The <code>AppInstanceUserArn</code> of the member you want to add to the
     * channel.</p>
     */
    inline const Aws::String& GetMemberArn() const{ return m_memberArn; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member you want to add to the
     * channel.</p>
     */
    inline bool MemberArnHasBeenSet() const { return m_memberArnHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member you want to add to the
     * channel.</p>
     */
    inline void SetMemberArn(const Aws::String& value) { m_memberArnHasBeenSet = true; m_memberArn = value; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member you want to add to the
     * channel.</p>
     */
    inline void SetMemberArn(Aws::String&& value) { m_memberArnHasBeenSet = true; m_memberArn = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member you want to add to the
     * channel.</p>
     */
    inline void SetMemberArn(const char* value) { m_memberArnHasBeenSet = true; m_memberArn.assign(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member you want to add to the
     * channel.</p>
     */
    inline CreateChannelMembershipRequest& WithMemberArn(const Aws::String& value) { SetMemberArn(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member you want to add to the
     * channel.</p>
     */
    inline CreateChannelMembershipRequest& WithMemberArn(Aws::String&& value) { SetMemberArn(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the member you want to add to the
     * channel.</p>
     */
    inline CreateChannelMembershipRequest& WithMemberArn(const char* value) { SetMemberArn(value); return *this;}


    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline const ChannelMembershipType& GetType() const{ return m_type; }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline void SetType(const ChannelMembershipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline void SetType(ChannelMembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline CreateChannelMembershipRequest& WithType(const ChannelMembershipType& value) { SetType(value); return *this;}

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline CreateChannelMembershipRequest& WithType(ChannelMembershipType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline CreateChannelMembershipRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline CreateChannelMembershipRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline CreateChannelMembershipRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}


    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * creating membership in a SubChannel for a moderator in an elastic channel.</p>
     * 
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * creating membership in a SubChannel for a moderator in an elastic channel.</p>
     * 
     */
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * creating membership in a SubChannel for a moderator in an elastic channel.</p>
     * 
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * creating membership in a SubChannel for a moderator in an elastic channel.</p>
     * 
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * creating membership in a SubChannel for a moderator in an elastic channel.</p>
     * 
     */
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * creating membership in a SubChannel for a moderator in an elastic channel.</p>
     * 
     */
    inline CreateChannelMembershipRequest& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * creating membership in a SubChannel for a moderator in an elastic channel.</p>
     * 
     */
    inline CreateChannelMembershipRequest& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * creating membership in a SubChannel for a moderator in an elastic channel.</p>
     * 
     */
    inline CreateChannelMembershipRequest& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet;

    Aws::String m_memberArn;
    bool m_memberArnHasBeenSet;

    ChannelMembershipType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
