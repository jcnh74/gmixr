/*
 Copyright 2015 Spotify AB

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#ifndef Simple_Track_Playback_Config_h
#define Simple_Track_Playback_Config_h

#warning Please update these values to match the settings for your own application as these example values could change at any time.
// For an in-depth auth demo, see the "Basic Auth" demo project supplied with the SDK.
// Don't forget to add your callback URL's prefix to the URL Types section in the target's Info pane!

// Your client ID
#define kClientId "8ddda79a38e74b2f9ba8c62d2280baac"

// Your applications callback URL
#define kCallbackURL "gmixr://callback"


// The URL to your token swap endpoint
// If you don't provide a token swap service url the login will use implicit grant tokens, which means that your user will need to sign in again every time the token expires.
//#define kTokenSwapServiceURL "https://gmixr-spotify-token-service.herokuapp.com/swap"
#define kTokenSwapServiceURL "https://pure-forest-85399.herokuapp.com/swap"
//#define kTokenSwapServiceURL "http://localhost:1234/swap"


// The URL to your token refresh endpoint
// If you don't provide a token refresh service url, the user will need to sign in again every time their token expires.

//#define kTokenRefreshServiceURL "https://gmixr-spotify-token-service.herokuapp.com/refresh"
#define kTokenRefreshServiceURL "https://pure-forest-85399.herokuapp.com/refresh"
//#define kTokenRefreshServiceURL "http://localhost:1234/refresh"


#define kSessionUserDefaultsKey "SpotifySession"

#endif
