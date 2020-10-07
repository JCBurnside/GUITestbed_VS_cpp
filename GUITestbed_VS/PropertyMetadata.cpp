module GUI.PropertyMetadata;
import GUI.Data.BindingMode;
import GUI.GuiProperty;
GUI::PropertyMetadata::PropertyMetadata(GUI::Data::BindingMode defaultBindingMode)
	:defaultBindingMode(defaultBindingMode)
{
}

virtual GUI::PropertyMetadata::~PropertyMetadata()
{
}

void GUI::PropertyMetadata::Merge(PropertyMetadata const& base, GuiProperty* /*property*/)
{
	if (defaultBindingMode == Data::BindingMode::Default)
	{
		defaultBindingMode = base.defaultBindingMode;
	}
}

GUI::Data::BindingMode GUI::PropertyMetadata::DefaultBindingMode() const
{
	return defaultBindingMode==GUI::Data::BindingMode::Default ? GUI::Data::BindingMode::OneWay : defaultBindingMode;
}