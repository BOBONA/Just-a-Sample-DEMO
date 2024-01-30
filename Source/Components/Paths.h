/*
  ==============================================================================

    Paths.h
    Created: 11 Jan 2024 11:40:37am
    Author:  binya

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

namespace PathData
{
    inline static const unsigned char stopIcon[] = { 110,109,131,175,164,65,0,0,232,65,108,249,160,54,65,0,0,232,65,108,249,160,54,65,0,0,232,65,108,72,10,53,65,124,251,231,65,108,140,116,51,65,208,236,231,65,108,202,224,49,65,6,212,231,65,108,3,80,48,65,44,177,231,65,108,57,195,46,65,89,132,231,65,108,
104,59,45,65,170,77,231,65,108,140,185,43,65,66,13,231,65,108,155,62,42,65,75,195,230,65,108,136,203,40,65,243,111,230,65,108,65,97,39,65,111,19,230,65,108,174,0,38,65,252,173,229,65,108,174,170,36,65,217,63,229,65,108,31,96,35,65,78,201,228,65,108,211,
33,34,65,166,74,228,65,108,150,240,32,65,50,196,227,65,108,0,0,32,65,20,80,227,65,108,0,0,32,65,20,80,227,65,108,99,127,101,64,0,0,176,65,108,98,127,101,64,0,0,176,65,108,131,26,97,64,8,109,175,65,108,206,241,92,64,57,211,174,65,108,237,7,89,64,244,50,
174,65,108,97,95,85,64,160,140,173,65,108,130,250,81,64,167,224,172,65,108,123,219,78,64,119,47,172,65,108,77,4,76,64,130,121,171,65,108,200,118,73,64,61,191,170,65,108,141,52,71,64,30,1,170,65,108,17,63,69,64,158,63,169,65,108,147,151,67,64,59,123,168,
65,108,34,63,66,64,114,180,167,65,108,155,54,65,64,192,235,166,65,108,166,126,64,64,169,33,166,65,108,187,23,64,64,171,86,165,65,108,0,0,64,64,131,175,164,65,108,0,0,64,64,131,175,164,65,108,0,0,64,64,249,160,54,65,108,0,0,64,64,249,160,54,65,108,30,
36,64,64,72,10,53,65,108,125,153,64,64,140,116,51,65,108,212,95,65,64,201,224,49,65,108,165,118,66,64,1,80,48,65,108,60,221,67,64,54,195,46,65,108,178,146,69,64,101,59,45,65,108,242,149,71,64,137,185,43,65,108,177,229,73,64,152,62,42,65,108,116,128,76,
64,133,203,40,65,108,146,100,79,64,61,97,39,65,108,47,144,82,64,169,0,38,65,108,70,1,86,64,170,170,36,65,108,161,181,89,64,26,96,35,65,108,226,170,93,64,206,33,34,65,108,130,222,97,64,145,240,32,65,108,98,127,101,64,0,0,32,65,108,99,127,101,64,0,0,32,
65,108,0,0,32,65,99,127,101,64,108,0,0,32,65,99,127,101,64,108,239,37,33,65,132,26,97,64,108,142,89,34,65,206,241,92,64,108,24,154,35,65,238,7,89,64,108,192,230,36,65,98,95,85,64,108,178,62,38,65,132,250,81,64,108,16,161,39,65,126,219,78,64,108,250,12,
41,65,80,4,76,64,108,132,129,42,65,202,118,73,64,108,194,253,43,65,144,52,71,64,108,192,128,45,65,20,63,69,64,108,134,9,47,65,150,151,67,64,108,25,151,48,65,36,63,66,64,108,123,40,50,65,157,54,65,64,108,170,188,51,65,168,126,64,64,108,165,82,53,65,188,
23,64,64,108,249,160,54,65,0,0,64,64,108,249,160,54,65,0,0,64,64,108,132,175,164,65,0,0,64,64,108,132,175,164,65,0,0,64,64,108,221,122,165,65,30,36,64,64,108,186,69,166,65,125,153,64,64,108,156,15,167,65,212,95,65,64,108,255,215,167,65,164,118,66,64,
108,100,158,168,65,58,221,67,64,108,77,98,169,65,176,146,69,64,108,59,35,170,65,240,149,71,64,108,179,224,170,65,174,229,73,64,108,61,154,171,65,112,128,76,64,108,96,79,172,65,140,100,79,64,108,170,255,172,65,40,144,82,64,108,170,170,173,65,62,1,86,64,
108,241,79,174,65,152,181,89,64,108,23,239,174,65,216,170,93,64,108,182,135,175,65,118,222,97,64,108,0,0,176,65,98,127,101,64,108,0,0,176,65,99,127,101,64,108,20,80,227,65,0,0,32,65,108,20,80,227,65,0,0,32,65,108,176,220,227,65,239,37,33,65,108,199,97,
228,65,142,89,34,65,108,3,223,228,65,24,154,35,65,108,20,84,229,65,192,230,36,65,108,176,192,229,65,178,62,38,65,108,144,36,230,65,16,161,39,65,108,118,127,230,65,249,12,41,65,108,39,209,230,65,132,129,42,65,108,110,25,231,65,194,253,43,65,108,30,88,
231,65,191,128,45,65,108,13,141,231,65,133,9,47,65,108,27,184,231,65,24,151,48,65,108,44,217,231,65,122,40,50,65,108,43,240,231,65,169,188,51,65,108,8,253,231,65,163,82,53,65,108,0,0,232,65,249,160,54,65,108,0,0,232,65,249,160,54,65,108,0,0,232,65,132,
175,164,65,108,0,0,232,65,132,175,164,65,108,124,251,231,65,220,122,165,65,108,208,236,231,65,186,69,166,65,108,6,212,231,65,155,15,167,65,108,44,177,231,65,254,215,167,65,108,89,132,231,65,100,158,168,65,108,170,77,231,65,76,98,169,65,108,66,13,231,
65,58,35,170,65,108,75,195,230,65,178,224,170,65,108,242,111,230,65,60,154,171,65,108,111,19,230,65,95,79,172,65,108,251,173,229,65,169,255,172,65,108,217,63,229,65,169,170,173,65,108,78,201,228,65,240,79,174,65,108,166,74,228,65,22,239,174,65,108,50,
196,227,65,181,135,175,65,108,20,80,227,65,0,0,176,65,108,20,80,227,65,0,0,176,65,108,0,0,176,65,20,80,227,65,108,0,0,176,65,20,80,227,65,108,8,109,175,65,176,220,227,65,108,57,211,174,65,198,97,228,65,108,244,50,174,65,2,223,228,65,108,160,140,173,65,
20,84,229,65,108,167,224,172,65,176,192,229,65,108,120,47,172,65,144,36,230,65,108,131,121,171,65,118,127,230,65,108,62,191,170,65,39,209,230,65,108,31,1,170,65,110,25,231,65,108,160,63,169,65,29,88,231,65,108,61,123,168,65,13,141,231,65,108,116,180,
167,65,27,184,231,65,108,195,235,166,65,44,217,231,65,108,171,33,166,65,43,240,231,65,108,174,86,165,65,8,253,231,65,108,131,175,164,65,0,0,232,65,108,131,175,164,65,0,0,232,65,99,101,0,0 };
}
