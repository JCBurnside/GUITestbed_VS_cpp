export module GUI.Data.BindingMode;

namespace GUI::Data {
	export enum class BindingMode
	{
		Default,
		OneWay,
		TwoWay,
		OneTime,
		OneWayToSource
	};
}