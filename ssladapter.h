<!DOCTYPE html><html lang="en"><head><meta charset="utf-8"><title>webrtc/base/ssladapter.h - external/webrtc - Git at Google</title><link rel="stylesheet" type="text/css" href="/+static/base.tUfpZ_-FMSB5BV8sDJSOrw.cache.css"><link rel="stylesheet" type="text/css" href="/+static/prettify/prettify.pZ5FqzM6cPxAflH0va2Ucw.cache.css"></head><body class="Site"><header class="Site-header"><div class="Header"><a class="Header-image" href="/"><img src="//www.gstatic.com/images/branding/lockups/2x/lockup_git_color_108x24dp.png" width="108" height="24" alt="Google Git"></a><div class="Header-menu"> <a class="Header-menuItem" href="https://www.google.com/a/SelectSession?service=gerritcodereview&amp;continue=https://chromium.googlesource.com/login/external/webrtc/%2B/master/webrtc/base/ssladapter.h">Sign in</a> </div></div></header><div class="Site-content"><div class="Container "><div class="Breadcrumbs"><a class="Breadcrumbs-crumb" href="/?format=HTML">chromium</a> / <a class="Breadcrumbs-crumb" href="/external/">external</a> / <a class="Breadcrumbs-crumb" href="/external/webrtc/">webrtc</a> / <a class="Breadcrumbs-crumb" href="/external/webrtc/+/master">master</a> / <a class="Breadcrumbs-crumb" href="/external/webrtc/+/master/">.</a> / <a class="Breadcrumbs-crumb" href="/external/webrtc/+/master/webrtc">webrtc</a> / <a class="Breadcrumbs-crumb" href="/external/webrtc/+/master/webrtc/base">base</a> / <span class="Breadcrumbs-crumb">ssladapter.h</span></div><div class="u-sha1 u-monospace BlobSha1">blob: 57e8ee9cc5db76ce96631a2c57424f07bd9948fb [<a href="/external/webrtc/+/master/webrtc/base/ssladapter.h">file</a>] [<a href="/external/webrtc/+log/master/webrtc/base/ssladapter.h">log</a>] [<a href="/external/webrtc/+blame/master/webrtc/base/ssladapter.h">blame</a>]</div><table class="FileContents"><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="1" onclick="window.location.hash='#1'"></td><td class="FileContents-lineContents"><a name="1"></a><span class="com">/*</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="2" onclick="window.location.hash='#2'"></td><td class="FileContents-lineContents"><a name="2"></a><span class="com"> *  Copyright 2004 The WebRTC Project Authors. All rights reserved.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="3" onclick="window.location.hash='#3'"></td><td class="FileContents-lineContents"><a name="3"></a><span class="com"> *</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="4" onclick="window.location.hash='#4'"></td><td class="FileContents-lineContents"><a name="4"></a><span class="com"> *  Use of this source code is governed by a BSD-style license</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="5" onclick="window.location.hash='#5'"></td><td class="FileContents-lineContents"><a name="5"></a><span class="com"> *  that can be found in the LICENSE file in the root of the source</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="6" onclick="window.location.hash='#6'"></td><td class="FileContents-lineContents"><a name="6"></a><span class="com"> *  tree. An additional intellectual property rights grant can be found</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="7" onclick="window.location.hash='#7'"></td><td class="FileContents-lineContents"><a name="7"></a><span class="com"> *  in the file PATENTS.  All contributing project authors may</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="8" onclick="window.location.hash='#8'"></td><td class="FileContents-lineContents"><a name="8"></a><span class="com"> *  be found in the AUTHORS file in the root of the source tree.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="9" onclick="window.location.hash='#9'"></td><td class="FileContents-lineContents"><a name="9"></a><span class="com"> */</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="10" onclick="window.location.hash='#10'"></td><td class="FileContents-lineContents"><a name="10"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="11" onclick="window.location.hash='#11'"></td><td class="FileContents-lineContents"><a name="11"></a><span class="com">#ifndef</span><span class="pln"> WEBRTC_BASE_SSLADAPTER_H_</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="12" onclick="window.location.hash='#12'"></td><td class="FileContents-lineContents"><a name="12"></a><span class="com">#define</span><span class="pln"> WEBRTC_BASE_SSLADAPTER_H_</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="13" onclick="window.location.hash='#13'"></td><td class="FileContents-lineContents"><a name="13"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="14" onclick="window.location.hash='#14'"></td><td class="FileContents-lineContents"><a name="14"></a><span class="com">#include</span><span class="pln"> </span><span class="str">&quot;webrtc/base/asyncsocket.h&quot;</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="15" onclick="window.location.hash='#15'"></td><td class="FileContents-lineContents"><a name="15"></a><span class="com">#include</span><span class="pln"> </span><span class="str">&quot;webrtc/base/sslstreamadapter.h&quot;</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="16" onclick="window.location.hash='#16'"></td><td class="FileContents-lineContents"><a name="16"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="17" onclick="window.location.hash='#17'"></td><td class="FileContents-lineContents"><a name="17"></a><span class="kwd">namespace</span><span class="pln"> rtc </span><span class="pun">{</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="18" onclick="window.location.hash='#18'"></td><td class="FileContents-lineContents"><a name="18"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="19" onclick="window.location.hash='#19'"></td><td class="FileContents-lineContents"><a name="19"></a><span class="com">///////////////////////////////////////////////////////////////////////////////</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="20" onclick="window.location.hash='#20'"></td><td class="FileContents-lineContents"><a name="20"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="21" onclick="window.location.hash='#21'"></td><td class="FileContents-lineContents"><a name="21"></a><span class="kwd">class</span><span class="pln"> </span><span class="typ">SSLAdapter</span><span class="pln"> </span><span class="pun">:</span><span class="pln"> </span><span class="kwd">public</span><span class="pln"> </span><span class="typ">AsyncSocketAdapter</span><span class="pln"> </span><span class="pun">{</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="22" onclick="window.location.hash='#22'"></td><td class="FileContents-lineContents"><a name="22"></a><span class="pln"> </span><span class="kwd">public</span><span class="pun">:</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="23" onclick="window.location.hash='#23'"></td><td class="FileContents-lineContents"><a name="23"></a><span class="pln">  </span><span class="kwd">explicit</span><span class="pln"> </span><span class="typ">SSLAdapter</span><span class="pun">(</span><span class="typ">AsyncSocket</span><span class="pun">*</span><span class="pln"> socket</span><span class="pun">)</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="24" onclick="window.location.hash='#24'"></td><td class="FileContents-lineContents"><a name="24"></a><span class="pln">    </span><span class="pun">:</span><span class="pln"> </span><span class="typ">AsyncSocketAdapter</span><span class="pun">(</span><span class="pln">socket</span><span class="pun">),</span><span class="pln"> ignore_bad_cert_</span><span class="pun">(</span><span class="kwd">false</span><span class="pun">)</span><span class="pln"> </span><span class="pun">{</span><span class="pln"> </span><span class="pun">}</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="25" onclick="window.location.hash='#25'"></td><td class="FileContents-lineContents"><a name="25"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="26" onclick="window.location.hash='#26'"></td><td class="FileContents-lineContents"><a name="26"></a><span class="pln">  </span><span class="kwd">bool</span><span class="pln"> ignore_bad_cert</span><span class="pun">()</span><span class="pln"> </span><span class="kwd">const</span><span class="pln"> </span><span class="pun">{</span><span class="pln"> </span><span class="kwd">return</span><span class="pln"> ignore_bad_cert_</span><span class="pun">;</span><span class="pln"> </span><span class="pun">}</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="27" onclick="window.location.hash='#27'"></td><td class="FileContents-lineContents"><a name="27"></a><span class="pln">  </span><span class="kwd">void</span><span class="pln"> set_ignore_bad_cert</span><span class="pun">(</span><span class="kwd">bool</span><span class="pln"> ignore</span><span class="pun">)</span><span class="pln"> </span><span class="pun">{</span><span class="pln"> ignore_bad_cert_ </span><span class="pun">=</span><span class="pln"> ignore</span><span class="pun">;</span><span class="pln"> </span><span class="pun">}</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="28" onclick="window.location.hash='#28'"></td><td class="FileContents-lineContents"><a name="28"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="29" onclick="window.location.hash='#29'"></td><td class="FileContents-lineContents"><a name="29"></a><span class="pln">  </span><span class="com">// Do DTLS or TLS (default is TLS, if unspecified)</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="30" onclick="window.location.hash='#30'"></td><td class="FileContents-lineContents"><a name="30"></a><span class="pln">  </span><span class="kwd">virtual</span><span class="pln"> </span><span class="kwd">void</span><span class="pln"> </span><span class="typ">SetMode</span><span class="pun">(</span><span class="typ">SSLMode</span><span class="pln"> mode</span><span class="pun">)</span><span class="pln"> </span><span class="pun">=</span><span class="pln"> </span><span class="lit">0</span><span class="pun">;</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="31" onclick="window.location.hash='#31'"></td><td class="FileContents-lineContents"><a name="31"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="32" onclick="window.location.hash='#32'"></td><td class="FileContents-lineContents"><a name="32"></a><span class="pln">  </span><span class="com">// StartSSL returns 0 if successful.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="33" onclick="window.location.hash='#33'"></td><td class="FileContents-lineContents"><a name="33"></a><span class="pln">  </span><span class="com">// If StartSSL is called while the socket is closed or connecting, the SSL</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="34" onclick="window.location.hash='#34'"></td><td class="FileContents-lineContents"><a name="34"></a><span class="pln">  </span><span class="com">// negotiation will begin as soon as the socket connects.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="35" onclick="window.location.hash='#35'"></td><td class="FileContents-lineContents"><a name="35"></a><span class="pln">  </span><span class="kwd">virtual</span><span class="pln"> </span><span class="kwd">int</span><span class="pln"> </span><span class="typ">StartSSL</span><span class="pun">(</span><span class="kwd">const</span><span class="pln"> </span><span class="kwd">char</span><span class="pun">*</span><span class="pln"> hostname</span><span class="pun">,</span><span class="pln"> </span><span class="kwd">bool</span><span class="pln"> restartable</span><span class="pun">)</span><span class="pln"> </span><span class="pun">=</span><span class="pln"> </span><span class="lit">0</span><span class="pun">;</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="36" onclick="window.location.hash='#36'"></td><td class="FileContents-lineContents"><a name="36"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="37" onclick="window.location.hash='#37'"></td><td class="FileContents-lineContents"><a name="37"></a><span class="pln">  </span><span class="com">// Create the default SSL adapter for this platform. On failure, returns NULL</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="38" onclick="window.location.hash='#38'"></td><td class="FileContents-lineContents"><a name="38"></a><span class="pln">  </span><span class="com">// and deletes |socket|. Otherwise, the returned SSLAdapter takes ownership</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="39" onclick="window.location.hash='#39'"></td><td class="FileContents-lineContents"><a name="39"></a><span class="pln">  </span><span class="com">// of |socket|.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="40" onclick="window.location.hash='#40'"></td><td class="FileContents-lineContents"><a name="40"></a><span class="pln">  </span><span class="kwd">static</span><span class="pln"> </span><span class="typ">SSLAdapter</span><span class="pun">*</span><span class="pln"> </span><span class="typ">Create</span><span class="pun">(</span><span class="typ">AsyncSocket</span><span class="pun">*</span><span class="pln"> socket</span><span class="pun">);</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="41" onclick="window.location.hash='#41'"></td><td class="FileContents-lineContents"><a name="41"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="42" onclick="window.location.hash='#42'"></td><td class="FileContents-lineContents"><a name="42"></a><span class="pln"> </span><span class="kwd">private</span><span class="pun">:</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="43" onclick="window.location.hash='#43'"></td><td class="FileContents-lineContents"><a name="43"></a><span class="pln">  </span><span class="com">// If true, the server certificate need not match the configured hostname.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="44" onclick="window.location.hash='#44'"></td><td class="FileContents-lineContents"><a name="44"></a><span class="pln">  </span><span class="kwd">bool</span><span class="pln"> ignore_bad_cert_</span><span class="pun">;</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="45" onclick="window.location.hash='#45'"></td><td class="FileContents-lineContents"><a name="45"></a><span class="pun">};</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="46" onclick="window.location.hash='#46'"></td><td class="FileContents-lineContents"><a name="46"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="47" onclick="window.location.hash='#47'"></td><td class="FileContents-lineContents"><a name="47"></a><span class="com">///////////////////////////////////////////////////////////////////////////////</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="48" onclick="window.location.hash='#48'"></td><td class="FileContents-lineContents"><a name="48"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="49" onclick="window.location.hash='#49'"></td><td class="FileContents-lineContents"><a name="49"></a><span class="kwd">typedef</span><span class="pln"> </span><span class="kwd">bool</span><span class="pln"> </span><span class="pun">(*</span><span class="typ">VerificationCallback</span><span class="pun">)(</span><span class="kwd">void</span><span class="pun">*</span><span class="pln"> cert</span><span class="pun">);</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="50" onclick="window.location.hash='#50'"></td><td class="FileContents-lineContents"><a name="50"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="51" onclick="window.location.hash='#51'"></td><td class="FileContents-lineContents"><a name="51"></a><span class="com">// Call this on the main thread, before using SSL.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="52" onclick="window.location.hash='#52'"></td><td class="FileContents-lineContents"><a name="52"></a><span class="com">// Call CleanupSSLThread when finished with SSL.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="53" onclick="window.location.hash='#53'"></td><td class="FileContents-lineContents"><a name="53"></a><span class="kwd">bool</span><span class="pln"> </span><span class="typ">InitializeSSL</span><span class="pun">(</span><span class="typ">VerificationCallback</span><span class="pln"> callback </span><span class="pun">=</span><span class="pln"> NULL</span><span class="pun">);</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="54" onclick="window.location.hash='#54'"></td><td class="FileContents-lineContents"><a name="54"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="55" onclick="window.location.hash='#55'"></td><td class="FileContents-lineContents"><a name="55"></a><span class="com">// Call to initialize additional threads.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="56" onclick="window.location.hash='#56'"></td><td class="FileContents-lineContents"><a name="56"></a><span class="kwd">bool</span><span class="pln"> </span><span class="typ">InitializeSSLThread</span><span class="pun">();</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="57" onclick="window.location.hash='#57'"></td><td class="FileContents-lineContents"><a name="57"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="58" onclick="window.location.hash='#58'"></td><td class="FileContents-lineContents"><a name="58"></a><span class="com">// Call to cleanup additional threads, and also the main thread.</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="59" onclick="window.location.hash='#59'"></td><td class="FileContents-lineContents"><a name="59"></a><span class="kwd">bool</span><span class="pln"> </span><span class="typ">CleanupSSL</span><span class="pun">();</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="60" onclick="window.location.hash='#60'"></td><td class="FileContents-lineContents"><a name="60"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="61" onclick="window.location.hash='#61'"></td><td class="FileContents-lineContents"><a name="61"></a><span class="com">///////////////////////////////////////////////////////////////////////////////</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="62" onclick="window.location.hash='#62'"></td><td class="FileContents-lineContents"><a name="62"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="63" onclick="window.location.hash='#63'"></td><td class="FileContents-lineContents"><a name="63"></a><span class="pun">}</span><span class="pln">  </span><span class="com">// namespace rtc</span></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="64" onclick="window.location.hash='#64'"></td><td class="FileContents-lineContents"><a name="64"></a></td></tr><tr class="u-pre u-monospace FileContents-line"><td class="u-lineNum u-noSelect FileContents-lineNum" data-line-number="65" onclick="window.location.hash='#65'"></td><td class="FileContents-lineContents"><a name="65"></a><span class="com">#endif</span><span class="pln">  </span><span class="com">// WEBRTC_BASE_SSLADAPTER_H_</span></td></tr></table></div> <!-- Container --></div> <!-- Site-content --><footer class="Site-footer"><div class="Footer"><span class="Footer-poweredBy">Powered by <a href="https://code.google.com/p/gitiles/">Gitiles</a></span><span class="Footer-formats"><a class="u-monospace Footer-formatsItem" href="?format=TEXT">txt</a> <a class="u-monospace Footer-formatsItem" href="?format=JSON">json</a></span></div></footer></body></html>