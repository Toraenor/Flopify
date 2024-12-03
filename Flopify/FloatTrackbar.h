#pragma once

namespace CustomControls {

    // Custom TrackBar that uses floating point precision
    public ref class FloatTrackBar : public System::Windows::Forms::TrackBar
    {
    private:
        float precision; // Precision factor

    public:
        // Constructor to initialize the precision value
        FloatTrackBar()
        {
            precision = 0.01f; // default precision
        }

        // Property for Precision
        property float Precision
        {
            float get() { return precision; }
            void set(float value)
            {
                precision = value;
                // Here, you would need to update properties like LargeChange, Maximum, etc.
                this->LargeChange = this->LargeChange;
                this->Maximum = this->Maximum;
                this->Minimum = this->Minimum;
                this->SmallChange = this->SmallChange;
                this->Value = this->Value;
            }
        }

        // Overriding the LargeChange property to apply precision
        property float LargeChange
        {
            float get() { return TrackBar::LargeChange * precision; }
            void set(float value)
            {
                TrackBar::LargeChange = (int)(value / precision);
            }
        }

        // Overriding the Maximum property to apply precision
        property float Maximum
        {
            float get() { return TrackBar::Maximum * precision; }
            void set(float value)
            {
                TrackBar::Maximum = (int)(value / precision);
            }
        }

        // Overriding the Minimum property to apply precision
        property float Minimum
        {
            float get() { return TrackBar::Minimum * precision; }
            void set(float value)
            {
                TrackBar::Minimum = (int)(value / precision);
            }
        }

        // Overriding the SmallChange property to apply precision
        property float SmallChange
        {
            float get() { return TrackBar::SmallChange * precision; }
            void set(float value)
            {
                TrackBar::SmallChange = (int)(value / precision);
            }
        }

        // Overriding the Value property to apply precision
        property float Value
        {
            float get() { return TrackBar::Value * precision; }
            void set(float value)
            {
                TrackBar::Value = (int)(value / precision);
            }
        }
    };
}

