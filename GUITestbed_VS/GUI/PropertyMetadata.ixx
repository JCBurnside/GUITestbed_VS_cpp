export module GUI.PropertyMetadata;
export import GUI.Data.BindingMode;
namespace GUI
{
	class GuiProperty;
	export class PropertyMetadata
	{
		Data::BindingMode defaultBindingMode;
	public:
		PropertyMetadata(Data::BindingMode defaultBindingMode= Data::BindingMode::Default);
		virtual ~PropertyMetadata();
		virtual void Merge(
			PropertyMetadata const& base,
			GuiProperty* /*property*/
		);
		Data::BindingMode DefaultBindingMode() const;
	};
}
 