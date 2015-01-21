/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_BFBAB84DA31A01CD__
#define __JUCE_HEADER_BFBAB84DA31A01CD__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]

#include "graphical_step_sequencer.h"
#include "graphical_envelope.h"
#include "wave_form_selector.h"
#include "filter_response.h"
#include "modulation_source.h"
#include "modulation_destination.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class SynthesisInterface  : public Component,
                            public DragAndDropContainer,
                            public SliderListener
{
public:
    //==============================================================================
    SynthesisInterface ();
    ~SynthesisInterface();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void addControls(mopo::control_map controls) { controls_ = controls; }
    var getState();
    void writeState(var state);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    mopo::control_map controls_;
    std::map<std::string, juce::Slider*> slider_lookup_;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<GraphicalStepSequencer> step_sequencer_;
    ScopedPointer<GraphicalEnvelope> amplitude_envelope_;
    ScopedPointer<GraphicalEnvelope> filter_envelope_;
    ScopedPointer<WaveFormSelector> osc_1_wave_display_;
    ScopedPointer<WaveFormSelector> osc_2_wave_display_;
    ScopedPointer<Slider> polyphony_;
    ScopedPointer<Slider> portamento_;
    ScopedPointer<Slider> pitch_bend_range_;
    ScopedPointer<Slider> cross_modulation_;
    ScopedPointer<FilterResponse> filter_response_;
    ScopedPointer<Slider> legato_;
    ScopedPointer<Slider> portamento_type_;
    ScopedPointer<Slider> osc_mix_;
    ScopedPointer<Slider> osc_2_transpose_;
    ScopedPointer<Slider> osc_2_tune_;
    ScopedPointer<Slider> volume_;
    ScopedPointer<Slider> delay_time_;
    ScopedPointer<Slider> delay_feedback_;
    ScopedPointer<Slider> delay_dry_wet_;
    ScopedPointer<Slider> velocity_track_;
    ScopedPointer<Slider> amp_attack_;
    ScopedPointer<Slider> amp_decay_;
    ScopedPointer<Slider> amp_release_;
    ScopedPointer<Slider> amp_sustain_;
    ScopedPointer<Slider> fil_attack_;
    ScopedPointer<Slider> fil_decay_;
    ScopedPointer<Slider> fil_release_;
    ScopedPointer<Slider> fil_sustain_;
    ScopedPointer<Slider> resonance_;
    ScopedPointer<Slider> filter_type_;
    ScopedPointer<Slider> osc_1_waveform_;
    ScopedPointer<Slider> osc_2_waveform_;
    ScopedPointer<Slider> cutoff_;
    ScopedPointer<Slider> fil_env_depth_;
    ScopedPointer<Slider> keytrack_;
    ScopedPointer<Slider> osc_feedback_transpose_;
    ScopedPointer<Slider> osc_feedback_amount_;
    ScopedPointer<Slider> osc_feedback_tune_;
    ScopedPointer<ModulationSource> amplitude_env_mod_source_;
    ScopedPointer<ModulationSource> step_generator_mod_source_;
    ScopedPointer<ModulationSource> filter_env_mod_source_;
    ScopedPointer<ModulationDestination> cross_mod_destination_;
    ScopedPointer<ModulationDestination> pitch_mod_destination_;
    ScopedPointer<ModulationDestination> cutoff_mod_destination_;
    ScopedPointer<WaveFormSelector> lfo_1_wave_display_;
    ScopedPointer<WaveFormSelector> lfo_2_wave_display_;
    ScopedPointer<Slider> lfo_1_waveform_;
    ScopedPointer<Slider> lfo_2_waveform_;
    ScopedPointer<ModulationSource> lfo_1_mod_source_;
    ScopedPointer<ModulationSource> lfo_2_mod_source_;
    ScopedPointer<ModulationDestination> resonance_mod_destination_;
    ScopedPointer<Slider> arp_frequency_;
    ScopedPointer<Slider> arp_gate_;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SynthesisInterface)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_BFBAB84DA31A01CD__