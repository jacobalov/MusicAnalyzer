#pragma once

#include <string>

class AudioAnalyzer {
    public:
        AudioAnalyzer();
        ~AudioAnalyzer();

        void initializePipeline(const std::string& filePath);
};
