void main()
{
	stage_options(); //настройка окна и название консоли
	cursor_options(); //настройка курсора
	name_variables(); //именование переменных и констант
	generate(); //генерация
	print(); //вывод
	installation_wall(); //установка стен
	definition_entry_exit(); //определение точки входа и выхода
	delete_enemy(); //жеребьёвка для врагов
	delete_health(); //жеребьёвка для здоровья
	set_color(); //присвоение цвета
	definition_hero(); //установка главного героя
	move_hero(); //перемещение главного героя
	setting_infbox(); //установка инфобокса
	wall_damage(); //нанесение урона при соприкосновение со стеной
	take_coin(); //получение монеты
	take_health(); //получение лечения
	take_damage(); //получение урона от врагов
	buy_smth(); //покупка бонусов
	start_boss(); //появление босса
	check_exit(); //проверка на выход
	next_level(); //переход на новый уровень
}