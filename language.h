/**
HENkaku R9対応版言語ファイル v.1
日本語のみ修正
修正者 @Umineko19930417
**/

/**
 * @brief      Language container for HENkaku Settings
 */
#ifndef LANGUAGE_HEADER
#define LANGUAGE_HEADER

typedef struct {
  char *msg_henkaku_settings;
  char *msg_enable_psn_spoofing;
  char *msg_enable_unsafe_homebrew;
  char *msg_unsafe_homebrew_description;
  char *msg_enable_version_spoofing;
  char *msg_spoofed_version;
  char *msg_button_behavior;
  char *msg_button_enter;
  char *msg_button_cancel;
} language_container_t;

language_container_t language_japanese = {
  "HENkakuの設定",
  "PSNの偽装を有効",
  "安全ではない自作アプリを有効",
  "悪意が含まれていたり誤って設定されていた場合、危険な自作アプリはあなたのデバイスを永久的に破壊する事が出来ます。インストールをする時は注意して下さい",
  "バージョンの偽装を有効",
  "偽装するバージョン",
  "○ボタンの動作設定",
  "決定",
  "キャンセル"
};

// by molecule
language_container_t language_english_us = {
  "HENkaku Settings",
  "Enable PSN spoofing",
  "Enable Unsafe Homebrew",
  "Unsafe homebrews can damage your device permanently, if they are misused, misconfigured, or malicious. Please take caution when installing them.",
  "Enable Version Spoofing",
  "Spoofed Version",
  "○ Button Behavior",
  "Enter",
  "Cancel"
};

// by jokira & devnoname120 & CelesteBlue-dev & chronoss09
language_container_t language_french = {
  "Paramètres de HENkaku",
  "Activer le spoof du PSN",
  "Autoriser l'installation de homebrews non sécurisés",
  "Les homebrews non sécurisés peuvent endommager votre système de façon permanente s'ils sont mal utilisés, mal configurés, ou malveillants. Prenez garde en activant ce paramètre.",
  "Activer le spoof de version",
  "Version spoofée",
  "Action du bouton ○",
  "Valider",
  "Annuler"
};

// by EricWeichhart & iamn0tdev
language_container_t language_spanish = {
  "Ajustes de HENkaku",
  "Activar Spoofing para PSN",
  "Activar Homebrew inseguro",
  "Homebrews inseguros pueden dañar tu dispositivo permanentemente si son maliciosos, erróneamente usados o configurados incorrectamente. Por favor, tenga precaución al instalarlos.",
  "Activar Spoofing de versión",
  "Versión para Spoofing",
  "Comportamiento del botón ○",
  "Aceptar",
  "Cancelar"
};

// by Ziusun
language_container_t language_german = {
  "HENkaku-Einstellungen",
  "PSN-Zugang aktivieren",
  "Unsichere Homebrew zulassen",
  "Unsichere Homebrew kann das Gerät dauerhaft beschädigen, sollte sie unsachgemäß eingesetzt und konfiguriert werden oder schadhaft sein. Die Installation bitte immer mit größter Sorgfalt vornehmen.",
  "Andere Firmware vortäuschen",
  "Aktuelle Firmware",
  "Funktion der ○-Taste",
  "Bestätigen",
  "Abbrechen"
};

// by blackjack4it
language_container_t language_italian = {
  "Impostazioni Henkaku",
  "Abilita lo Spoof PSN",
  "Abilita Homebrews non sicuri",
  "Gli Homebrews non sicuri possono danneggiare irrimediabilmente la tua console, se usati/configurati non correttamente o sospetti. Fai molta attenzione prima di procedere alla loro installazione.",
  "Abilita lo Spoof della versione corrente",
  "Versione corrente (Spoof)",
  "Comportamento del tasto ○",
  "OK",
  "Annulla"
};

// by ConsoleHax
language_container_t language_dutch = {
  "HENkaku Instellingen",
  "Activeer PSN spoofing",
  "Onveilige Homebrew toestaan",
  "Onveilige homebrew kan uw toestel permanent beschadigen indien deze onjuist geconfigureerd of kwaadaardig zijn. Let op met wat u installeert.",
  "Schakel Versie Spoofing in",
  "Spoofed Versie",
  "Gedrag van de ○-knop",
  "Enter",
  "Annuleren"
};

// by gnmmarechal
language_container_t language_portuguese_pt = {
  "Definições do HENkaku",
  "Ativar spoof da PSN",
  "Permitir aplicações inseguras",
  "Aplicações inseguras podem danificar o sistema permanentemente, se forem mal usadas, configuradas ou maliciosas. Tenha cuidado ao instalá-las.",
  "Ativar spoof da versão",
  "Versão do spoof",
  "Ação do botão ○",
  "Entrar",
  "Cancelar"
};

// by Tenek
language_container_t language_russian = {
  "Настройки HENkaku",
  "Включить спуфинг PSN",
  "Включить небезопасные приложения",
  "Небезопасные приложения могут повредить ваше устройство навсегда, если они используются неправильно, неправильно настроены или вредоносны. Пожалуйста, проявляйте осторожность при их установке.",
  "Включить подмену версии",
  "Поддельная версия",
  "Поведение кнопки ○",
  "Ввод",
  "Отмена"
};

// by TriggerHavoc
language_container_t language_korean = {
  "HENkaku 설정",
  "PSN 스푸핑 활성화",
  "안전하지 않은 홈브류 활성화",
  "만약 홈브류가 오설정, 또는 악성코드등 오용된다면, 안전하지 않은 홈브류 활성화 옵션은 당신의 디바이스에 영구적으로 피해를 줄 수 있습니다. 홈브류를 설치할 때 주의해주세요.",
  "버전 스푸핑 활성화",
  "스푸핑 버전",
  "○ 버튼 설정",
  "확인",
  "취소"
};

// by iTZQing
language_container_t language_chinese_t = {
  "HENkaku設置",
  "啟用PSN偽裝",
  "啟用不安全自制軟件",
  "如果不安全自制軟件被誤用、配置出現錯誤或軟件本身是惡意程序，可能會永久性損壞你的設備。請謹慎安裝！",
  "啟用版本偽裝",
  "偽裝版本",
  "○ 按鍵配置",
  "確定",
  "取消"
};

// by iTZQing
language_container_t language_chinese_s = {
  "HENkaku设置",
  "启用PSN伪装",
  "启用不安全自制软件",
  "如果不安全自制软件被误用、配置出现错误或软件本身是恶意程序，可能会永久性损坏你的设备。请谨慎安装！",
  "启用版本伪装",
  "伪装版本",
  "○ 按键配置",
  "确定",
  "取消"
};

// by v5000a
language_container_t language_finnish = {
  "HENkakun Asetukset",
  "Ota PSN spooffaaminen käyttöön",
  "Salli vaaralliset homebrew-ohjelmat",
  "Vaaralliset homebrew-ohjelmat voivat vahingoittaa laitettasi pysyvästi, mikäli niitä käytetään väärin, ne konfiguroidaan väärin, tai ne ovat haittaohjelmia. Ole varovainen asentaessasi niitä.",
  "Ota version spooffaaminen käyttöön",
  "Spooffattu versio",
  "○-näppäimen toiminto",
  "Valitse",
  "Peruuta"
};

// by MrOrbital
language_container_t language_swedish = {
  "HENkaku Inställningar",
  "Aktivera fejkad PSN-inloggning",
  "Tillåt osäker Homebrew",
  "Osäkra Homebrews kan skada din enhet permanent ifall de används på fel sätt, är felkonfigurerade, eller innehåller skadlig kod. Var försiktig vid installation.",
  "Aktivera fejkad version",
  "Fejkad version",
  "Funktion på ○-knapp",
  "Välj",
  "Avbryt"
};

// by coestergaard
language_container_t language_danish = {
  "HENkaku indstillinger",
  "Aktiver PSN spoofing",
  "Tillad usikre homebrews",
  "Usikre homebrews kan skade din enhed permanent, hvis de bruges forkert, er fejlkonfigurerede eller indeholder skadelig kode. Vær forsigtig når du installerer disse.",
  "Aktiver version spoofing",
  "Spoofed version",
  "○ knap funktion",
  "Vælg",
  "Afbryd"
};

// by baniel105
language_container_t language_norwegian = {
  "HENkaku Instillinger",
  "Aktiver forfalsket PSN-innlogging",
  "Tillat usikker Homebrew",
  "Usikre Homebrews kan ødelegge enhenten din permanent, hvis de er misbrukt, feilkonfigerert, eller inneholder skadelig programvare. Vær forsiktig ved installasjon.",
  "Aktiver forfalsket versjon",
  "Forfalsket versjon",
  "Funksjon på ○-knapp",
  "Velg",
  "Avbryt"
};

// by Grzybojad & szczuru
language_container_t language_polish = {
  "Ustawienia HENkaku",
  "Włącz fałszowanie PSN/SEN (spoofing)",
  "Zezwól na podejrzane Homebrew",
  "Podejrzane aplikacje mogą zawierać złośliwe oprogramowanie, przez co mogą trwale uszkodzić twoje urządzenie, jeżeli zostaną niepoprawnie użyte, bądź źle skonfigurowane. Proszę zachować ostrożność przy ich instalacji.",
  "Włącz fałszowanie wersji oprogramowania (spoofing)",
  "Fałszowana wersja",
  "Akcja przycisku ○",
  "OK",
  "Anuluj"
};

// by GrayJack & haouingvalt
language_container_t language_portuguese_br = {
  "Configurações do HENkaku",
  "Habilitar mimetização da PSN ",
  "Habilitar softwares 'homebrew' inseguros",
  "Softwares 'homebrew' inseguros podem danificar o seu aparelho permanentemente caso sejam usados ou configurados incorretamente, ou até mesmo maliciosos. Por favor, tenha cuidado ao instalá-los.",
  "Habilitar mimetização de Versão",
  "Versão a mimetizar",
  "Ação do botão ○",
  "Entrar",
  "Cancelar"
};

// by molecule
language_container_t language_english_gb = {
  "HENkaku Settings",
  "Enable PSN spoofing",
  "Enable Unsafe Homebrew",
  "Unsafe homebrews can damage your device permanently, if they are misused, misconfigured, or malicious. Please take caution when installing them.",
  "Enable Version Spoofing",
  "Spoofed Version",
  "○ Button Behaviour",
  "Enter",
  "Cancel"
};

// by Chronicl3
language_container_t language_turkish = {
  "HENkaku Ayarları",
  "PSN spoofing Etkinleştir",
  "Yabancı Uygulamalara İzin Ver ",
  "Bilinmeyen kaynaklardan uygulama yüklerken dikkatli olunuz.Kötü niyetli,yanlış yapılandırılmış uygulamalar cihazınıza kalıcı zararlar verebilir.",
  "Versiyon Spoofing Etkinleştir",
  "Spoofed Versiyon",
  "○ Düğmesi Davranışı",
  "Gir",
  "İptal"
};

#endif // LANGUAGE_HEADER