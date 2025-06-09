# Диаграммы классов системы управления устройствами

## 1. Базовый класс `Device` и вспомогательные структуры
```mermaid
classDiagram
    %% Основной класс устройства
    class Device {
        <<abstract>>
        +id: String
        +name: String
        +coordinates: Coordinates
        +connectionStatus: ConnectionStatus
        +operationStatus: OperationStatus
        +lastUpdated: String
        +batteryLevel: Number
        +isMobile: Boolean
        +vendor: String
        +firmwareVersion: String
    }

    class Coordinates {
        +lat: Number
        +lng: Number
    }

    class ConnectionStatus {
        <<enumeration>>
        ONLINE
        OFFLINE
        UNSTABLE
        UPDATING
    }

    class OperationStatus {
        <<enumeration>>
        ACTIVE
        INACTIVE
        STANDBY
        FAULT
    }

    Device *-- Coordinates
    Device *-- ConnectionStatus
    Device *-- OperationStatus
```

## 2. Класс `Jammer` (Подавитель)
```mermaid
classDiagram
    Device <|-- Jammer

    class Jammer {
        +type: JammerType
        +frequencyRange: FrequencyRange
        +jammingPower: Number
        +supportedProtocols: String[]
        +autoShutdownTimeout: Number
    }

    class FrequencyRange {
        +min: Number
        +max: Number
    }

    class JammerType {
        <<enumeration>>
        GSM
        WiFi
        GPS
        UAV
    }

    Jammer *-- FrequencyRange
    Jammer *-- JammerType
```

## 3. Класс `Detector` (Обнаружитель)
```mermaid
classDiagram
    Device <|-- Detector

    class Detector {
        +frequency: Number
        +radius: Radius
        +sensitivity: Number
        +scanMode: ScanMode
        +detectedSignals: DetectedSignal[]
    }

    class Radius {
        +value: Number
        +unit: String
    }

    class DetectedSignal {
        +frequency: Number
        +strength: Number
        +type: String
    }

    class ScanMode {
        <<enumeration>>
        FAST
        DEEP
    }

    Detector *-- Radius
    Detector *-- ScanMode
    Detector *-- DetectedSignal
```

## 4. Класс `Spoofer` (Спуфер)
```mermaid
classDiagram
    Device <|-- Spoofer

    class Spoofer {
        +transmitterPower: Number
        +effectRadius: Radius
        +spoofingType: SpoofingType
        +frequencyRanges: FrequencyRange[]
        +activeScenario: String
        +successRate: Number
    }

    class SpoofingType {
        <<enumeration>>
        MEACONING
        REPLAY
        GENERATIVE
    }

    Spoofer *-- Radius
    Spoofer *-- SpoofingType
    Spoofer *-- FrequencyRange
```

## 5. Вспомогательные сущности
### 5.1. Группа устройств (`DeviceGroup`)
```mermaid
classDiagram
    class DeviceGroup {
        +id: String
        +name: String
        +devices: DeviceRef[]
        +zone: Zone
    }

    class DeviceRef {
        +id: String
        +type: DeviceType
    }

    class Zone {
        +center: Coordinates
        +radius: Number
    }

    class DeviceType {
        <<enumeration>>
        JAMMER
        DETECTOR
        SPOOFER
    }

    DeviceGroup *-- DeviceRef
    DeviceGroup *-- Zone
    DeviceRef *-- DeviceType
```

### 5.2. События устройств (`DeviceEvent`)
```mermaid
classDiagram
    class DeviceEvent {
        +timestamp: String
        +deviceId: String
        +eventType: EventType
        +message: String
        +severity: Severity
    }

    class EventType {
        <<enumeration>>
        STATUS_CHANGE
        ERROR
        ALERT
    }

    class Severity {
        <<enumeration>>
        LOW
        MEDIUM
        CRITICAL
    }
```

## Итоговая схема связей
```mermaid
classDiagram
    Device <|-- Jammer
    Device <|-- Detector
    Device <|-- Spoofer
    DeviceGroup *-- DeviceRef
    DeviceRef ..> Device

    note for Device "Все устройства наследуют общие поля: id, координаты, статусы и т.д."
```
