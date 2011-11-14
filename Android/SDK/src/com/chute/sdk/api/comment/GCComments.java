﻿// Copyright (c) 2011, Chute Corporation. All rights reserved.
// 
//  Redistribution and use in source and binary forms, with or without modification, 
//  are permitted provided that the following conditions are met:
// 
//     * Redistributions of source code must retain the above copyright notice, this 
//       list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright notice,
//       this list of conditions and the following disclaimer in the documentation
//       and/or other materials provided with the distribution.
//     * Neither the name of the  Chute Corporation nor the names
//       of its contributors may be used to endorse or promote products derived from
//       this software without specific prior written permission.
// 
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
//  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
//  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
//  OF THE POSSIBILITY OF SUCH DAMAGE.
// 
package com.chute.sdk.api.comment;

import android.content.Context;

import com.chute.sdk.api.GCHttpCallback;
import com.chute.sdk.api.GCHttpRequest;
import com.chute.sdk.parsers.base.GCHttpResponseParser;

public class GCComments {
    @SuppressWarnings("unused")
    private static final String TAG = GCComments.class.getSimpleName();

    private GCComments() {
    }

    public static <T> GCHttpRequest delete(final Context context, final String id,
	    final GCHttpResponseParser<T> parser, final GCHttpCallback<T> callback) {
	return new CommentsDeleteRequest<T>(context, id, parser, callback);
    }

    public static <T> GCHttpRequest get(final Context context, final String chuteId,
	    final String assetId, final GCHttpResponseParser<T> parser,
	    final GCHttpCallback<T> callback) {
	return new CommentsGetRequest<T>(context, chuteId, assetId, parser, callback);
    }

    public static <T> GCHttpRequest add(final Context context, final String chuteId,
	    final String assetId, final String comment, final GCHttpResponseParser<T> parser,
	    final GCHttpCallback<T> callback) {
	return new CommentsPostRequest<T>(context, chuteId, assetId, comment, parser, callback);
    }
}