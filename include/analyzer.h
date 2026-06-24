#pragma once

#include <string>
#include <aubio.h>

class AudioAnalyzer {
    public:
        AudioAnalyzer();
        ~AudioAnalyzer();

        void initializePipeline(const std::string& filePath);

    private:
        aubio_pitch_t* pitchDetector;
        fvec_t* audioBuffer;
};
