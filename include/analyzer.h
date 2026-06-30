#pragma once

#include <string>
#include <aubio.h>

class AudioAnalyzer {
    public:
        AudioAnalyzer();
        ~AudioAnalyzer();

        void initializePipeline(const std::string& filePath);

    private:
        const uint_t windowSize_ = 2048;
        const uint_t hopSize_ = 512;

        aubio_pitch_t* pitchDetector_;
        fvec_t* audioBuffer_;
};
