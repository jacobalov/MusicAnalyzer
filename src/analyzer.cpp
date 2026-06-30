#include "analyzer.h"
#include <iostream>

AudioAnalyzer::AudioAnalyzer() : audioBuffer_(nullptr) {
    std::cout << "AudioAnalyzer: initialized" << std::endl;

    audioBuffer_ = new_fvec(hopSize_);

    if (audioBuffer_ == nullptr) {
        std::cerr << "AudioAnalyzer: failed to allocate audio buffer" << std::endl;
        return;
    }

    std::cout << "AudioAnalyzer: audio buffer allocated with length " << audioBuffer_->length << std::endl;
}

AudioAnalyzer::~AudioAnalyzer() {
    std::cout << "AudioAnalyzer: destroyed" << std::endl;

    if (audioBuffer_ != nullptr) {
        del_fvec(audioBuffer_);
        audioBuffer_ = nullptr;
        std::cout << "AudioAnalyzer: audio buffer deallocated" << std::endl;
    }
}

void AudioAnalyzer::initializePipeline(const std::string& filePath) {
    std::cout << "AudioAnalyzer: prepping pipeline for file: " << filePath << std::endl;
}